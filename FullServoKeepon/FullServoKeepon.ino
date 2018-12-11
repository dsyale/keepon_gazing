/*
	MuseumKeepon controller: v 2.0. Uses servos for all motors.
	-----------------------------------------------------------
	Listens for serial input in the following form:
		ppptttrrrbb
	where ppp, ttt, rrr are 3-digit relative values for pan, tilt, 
	and roll, respectively, and bb is a 2-digit value for bop.


	Notes:
	------
	This module has an optional secondary slave Arduino on a software serial channel
	that prints debug messages to its serial buffer because the main Arduino's hardware
	serial channel is busy with the motor command input. To enable debug message printing,
	uncomment the #define DEBUG_MODE line below and use DualSerial_Slave.ino on the 
	second Arduino, attaching it to the main Arduino as specified in the comments of that 
	.ino file.

	Ahsan Nawroj
	Henny Admoni
	Brad Hayes
	Updated: 08/08/2014
*/

#include <Arduino.h>
#include <string.h>
#include <SoftwareServo.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <SoftwareSerial.h>

// --------------------------------------------------------------------------------
//
//  PRE-PROCESSOR DIRECTIVES, DEFINITIONS, CONSTANTS
//
// --------------------------------------------------------------------------------
#define SERVO_PIN(x) (x+2)	// all servo pins are connected from pin 2 onwards
#define ROLL 0
#define BOP 1
#define TILT 2
#define PAN 3
#define SINGLE_BOP_DELAY 1500 		// --CALIBRATED--
#define BOP_OFF_SPEED 89 			// --CALIBRATED--
#define DEFAULT_BOP_SPEED 5 		// --CALIBRATED--
#define SERIAL_COMMAND_LENGTH 11 	

//#define DEBUG_MODE


// ------------------------------------------------------------------ --------------
//
//  G L O B A L S
//
// --------------------------------------------------------------------------------
SoftwareServo keeponServos[4];	// 0 = roll, 1 = bop, 2 = tilt, 3 = pan
int delayTimes[4];				// How long each motor takes to move 1 degree (must be calibrated)

unsigned int motor_movement_delay_end_time = 0; // Timestamp at which we stop blocking the receipt of new commands
unsigned int bopsRemaining = 0;					// Number of bops left to perform
unsigned long bopStartTime = 0;					// Clock time that bops started

unsigned int baud_rate = 9600;

#ifdef DEBUG_MODE
	SoftwareSerial debugSerial(10, 11); // RX, TX - for debugging with second Arduino
#endif

// --------------------------------------------------------------------------------
//
//  M A I N   D R I V E R   F U N C T I O N S
//
// --------------------------------------------------------------------------------
void setup () {

	// Open serial connection over main hardware serial port (USB)
	Serial.begin(baud_rate);

	#ifdef DEBUG_MODE
		// Open secondary serial connection for debugging with second Arduino
		debugSerial.begin(4800);
		debugSerial.println("Debug serial port open");
	#endif

	// Initialize servos
	resetMotorPositions();

	#ifdef DEBUG_MODE
		debugSerial.println("Initialized servos");
	#endif

	// While motor commands are mid-execution, we want to discard other commands
	// in the serial buffer so the motors aren't innundated with old messages.
	// Initialize a variable for how long to ignore serial buffer
	motor_movement_delay_end_time = 0;
	// Record how long it takes for each motor to move 1 degree (this should be calibrated)
	for (int i = 0; i < 4; i++) {
		delayTimes[i] = 5;
	}

	#ifdef DEBUG_MODE
		debugSerial.println("Completed setup");
	#endif
}


void loop () {
	// Update servo positions
 	SoftwareServo::refresh();

 	// Update current time
	unsigned long currentTime = millis();

	// Bop if there are remaining bops to do and time is within duration allotted to bopping
	if (bopsRemaining > 0 && (currentTime-bopStartTime) > SINGLE_BOP_DELAY) {
		--bopsRemaining;

		if (bopsRemaining == 0) {
			// No bops left to perform -- turn off motor
			stopBopping();
		} else {
			// Begin new bop
			bopStartTime = millis();
		}
	}


	// If currently in a motor movement, empty buffer until motor movement time is over
	// (This blocks until the serial buffer is empty)
	if (motor_movement_delay_end_time > currentTime) {
		while (Serial.available()) { Serial.read(); }
		return;
	}

	unsigned int panCommand=90, tiltCommand=90, rollCommand=90, bopsRequested=90;

	// Read in a new command from the serial buffer
	bool newCommandReceived = receiveCommands(panCommand, tiltCommand, rollCommand, bopsRequested);
	if (!newCommandReceived) return;


	#ifdef DEBUG_MODE
		// Note that read() simply returns the last command sent to the server,
		// not the actual servo position
		debugSerial.print("Current position: ");
		debugSerial.print("P: "); debugSerial.print(keeponServos[PAN].read());
		debugSerial.print(", T: "); debugSerial.print(keeponServos[TILT].read());
		debugSerial.print(", R: "); debugSerial.print(keeponServos[ROLL].read());
		debugSerial.print(", B: "); debugSerial.println(keeponServos[BOP].read());
	#endif	
		
	#ifdef DEBUG_MODE
		debugSerial.print("New command: ");
		debugSerial.print("P: "); debugSerial.print(panCommand);
		debugSerial.print(", T: "); debugSerial.print(tiltCommand);
		debugSerial.print(", R: "); debugSerial.print(rollCommand);
		debugSerial.print(", B: "); debugSerial.println(bopsRequested);
	#endif	
			
	int added_delay = 0;

	// Send motor commands for pan, tilt, roll, and bop.
	// If a position was sent to the motor, add the appropriate movement delay (if needed).
	// Note that motor_movement_delay_end_time will be the *largest* delay required 
	// for all of the commands, not the sum.
	if (sendMotorCommand(PAN, panCommand, added_delay)) {
		motor_movement_delay_end_time = max(motor_movement_delay_end_time, currentTime+added_delay);
	}
	if (sendMotorCommand(TILT, tiltCommand, added_delay)) {
		motor_movement_delay_end_time = max(motor_movement_delay_end_time, currentTime+added_delay);
	}
	if (sendMotorCommand(ROLL, rollCommand, added_delay)) {
		motor_movement_delay_end_time = max(motor_movement_delay_end_time, currentTime+added_delay);
	}
	if (startBopping(bopsRequested, added_delay)) {
		motor_movement_delay_end_time = max(motor_movement_delay_end_time, currentTime+added_delay);
	}
}

// --------------------------------------------------------------------------------
//
//  U T I L I T Y   F U N C T I O N S
//
// --------------------------------------------------------------------------------


/**
 * -------------------------------------
 * Command parsing from serial stream
 * -------------------------------------
 * Pan/Tilt/Roll take absolute positions 0-180, with 90 as the neutral starting position
 *
 * ALL COMMANDS HAVE FORM: 
 *     PPPTTTRRRBB
 * (pan tilt roll bop)
 * and are terminated by a null character '\0'
 *
 * The BOP command does not take a target angle, but rather the number of bops to execute.
 * BOPs can be cancelled by sending a value of 99, otherwise the greater number of 
 * {bopsRemaining, new_bop_request} will be taken.
 *
 * @param panCommand Set desired angle for pan motor
 * @param tiltCommand Set desired angle for tilt motor
 * @param rollCommand Set desired angle for roll motor
 * @param bopsRequested Set desired number of bops
 * @return bool True if a command was successfully received and parsed, false otherwise
 */
bool receiveCommands(	unsigned int &panCommand, 
						unsigned int &tiltCommand, 
						unsigned int &rollCommand, 
						unsigned int &bopsRequested
					) 
{
	// Wait for full message + termination char
  	if (Serial.available() < SERIAL_COMMAND_LENGTH+1) { return false; } 

  	// Read message from buffer
	char newByte;
  	String commandString(""); // string containing motor commands

	while (Serial.available() > 0) {	// if there is something on the buffer,
	    newByte = (char)Serial.read();	// read in the message one byte at a time
		if (newByte == '\0') break;		// and break on the termination char
	    commandString += newByte;
	}

	if (commandString.length() < SERIAL_COMMAND_LENGTH) return false; // Malformed, incomplete message - discard
	
	// Parse out individual motor commands from the command string
	panCommand = (commandString.substring(0,3)).toInt();
	tiltCommand = (commandString.substring(3,6)).toInt();
	rollCommand = (commandString.substring(6,9)).toInt();

	// Take the largest unfinished bop command as bops-left-to-do
	bopsRequested = max(bopsRemaining,(commandString.substring(9,11)).toInt());

	// A bop request of 99 is seen as a STOP signal and will terminate any bops-in-progress
	// This value was chosen because bopcount is only given 2 chars in the message protocol
	if (bopsRequested == 99) {
		stopBopping();
		bopsRequested = 0;	
	}

	// Constrain all commands to the range [0, 180]
	panCommand = constrain(panCommand, 0, 180);
	tiltCommand = constrain(tiltCommand, 0, 180);
	rollCommand = constrain(rollCommand, 0, 180);

	#ifdef DEBUG_MODE    
		debugSerial.print("parsed: ");
		debugSerial.print("P: "); debugSerial.print(panCommand);
		debugSerial.print(", T: "); debugSerial.print(tiltCommand);
		debugSerial.print(", R: "); debugSerial.print(rollCommand);
		debugSerial.print(", B: "); debugSerial.println(bopsRequested);
	#endif

	return true;
}

/**
 * Sets a motor command using absolute positioning
 *
 * @param motor The motor number (use #defines like PAN)
 * @param absoluteAngle Angle for motor to achieve
 * @param delay Set with the amount of movement delay to expect
 * @return bool True if sent a motor command, false if no movement
 */
bool sendMotorCommand(unsigned int motor, unsigned int absoluteAngle, int &delay) {
	// If this is the same as the last command, exit function
	if (absoluteAngle == keeponServos[motor].read()) return false;

	// Constrain the movement to the range of the motor, minus a buffer for safety
	unsigned int movement_target = constrain(absoluteAngle, 20, 160);

	// Find how far the motor needs to move
	unsigned int movement_distance = abs(keeponServos[motor].read() - movement_target);

	// Send the motor command to the servo
	keeponServos[motor].write(movement_target);

	// Calculate and set the delay time
	delay = delayTimes[motor] * movement_distance;

	return true;
}

/**
 * Starts BOP motor if BOP behavior is requested. 
 * 
 * @param count Number of bops to perform
 * @param added_delay Set with the amount of movement delay to expect
 * @return bool True if sent a motor command, false if no movement
 */
bool startBopping(unsigned int count, int &added_delay) {
	// Check that bops were requested
	if (count == 0) { stopBopping(); return false; }

	// Record the number of bops left in a global variable
	bopsRemaining = count;

	// Turn on the bop motor
	keeponServos[BOP].write(DEFAULT_BOP_SPEED);

	// Record the bop start time in a global variable
	bopStartTime = millis();

	added_delay = 0;
	return true;
}

/**
 * Stops bopping behavior.
 */
void stopBopping() {
	// Turn off bop motor
	keeponServos[BOP].write(BOP_OFF_SPEED);

	// Reset bop-related globals
	bopStartTime = 0;
	bopsRemaining = 0;
}

/**
 * Reset motor positions to home positions (90 degrees). 
 * This function will abort any current motor action.
 */
void resetMotorPositions () {
	for(int nServo = 0; nServo < 4; nServo++)  {
		// Attach servos to specified pins
		keeponServos[nServo].attach(SERVO_PIN(nServo));

		// Send command to each servo to return home
		keeponServos[nServo].write(90); // default starting location
		delay(10);

		SoftwareServo::refresh();
	}
	// Turn bop servo off
	keeponServos[BOP].write(BOP_OFF_SPEED);
}
