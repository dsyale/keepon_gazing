
"use strict";

let TestEmpty = require('./TestEmpty.js');
let TestArray = require('./TestArray.js');
let TestWithHeader = require('./TestWithHeader.js');
let TestStringInt = require('./TestStringInt.js');
let ArrayOfFixedLength = require('./ArrayOfFixedLength.js');
let WithHeader = require('./WithHeader.js');
let EmbeddedVariableLength = require('./EmbeddedVariableLength.js');
let EmbeddedFixedLength = require('./EmbeddedFixedLength.js');
let VariableLengthArrayOfExternal = require('./VariableLengthArrayOfExternal.js');
let FixedLengthStringArray = require('./FixedLengthStringArray.js');
let ArrayOfVariableLength = require('./ArrayOfVariableLength.js');
let WithTime = require('./WithTime.js');
let CustomHeader = require('./CustomHeader.js');
let VariableLengthStringArray = require('./VariableLengthStringArray.js');
let WithMemberNamedHeaderThatIsNotAHeader = require('./WithMemberNamedHeaderThatIsNotAHeader.js');
let FixedLengthArrayOfExternal = require('./FixedLengthArrayOfExternal.js');
let WithDuration = require('./WithDuration.js');
let VariableLength = require('./VariableLength.js');
let HeaderNotFirstMember = require('./HeaderNotFirstMember.js');
let EmbeddedExternal = require('./EmbeddedExternal.js');
let FixedLength = require('./FixedLength.js');
let Constants = require('./Constants.js');
let ThroughputMessage = require('./ThroughputMessage.js');
let LatencyMessage = require('./LatencyMessage.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let Point32 = require('./Point32.js');
let PointCloud = require('./PointCloud.js');

module.exports = {
  TestEmpty: TestEmpty,
  TestArray: TestArray,
  TestWithHeader: TestWithHeader,
  TestStringInt: TestStringInt,
  ArrayOfFixedLength: ArrayOfFixedLength,
  WithHeader: WithHeader,
  EmbeddedVariableLength: EmbeddedVariableLength,
  EmbeddedFixedLength: EmbeddedFixedLength,
  VariableLengthArrayOfExternal: VariableLengthArrayOfExternal,
  FixedLengthStringArray: FixedLengthStringArray,
  ArrayOfVariableLength: ArrayOfVariableLength,
  WithTime: WithTime,
  CustomHeader: CustomHeader,
  VariableLengthStringArray: VariableLengthStringArray,
  WithMemberNamedHeaderThatIsNotAHeader: WithMemberNamedHeaderThatIsNotAHeader,
  FixedLengthArrayOfExternal: FixedLengthArrayOfExternal,
  WithDuration: WithDuration,
  VariableLength: VariableLength,
  HeaderNotFirstMember: HeaderNotFirstMember,
  EmbeddedExternal: EmbeddedExternal,
  FixedLength: FixedLength,
  Constants: Constants,
  ThroughputMessage: ThroughputMessage,
  LatencyMessage: LatencyMessage,
  ChannelFloat32: ChannelFloat32,
  Point32: Point32,
  PointCloud: PointCloud,
};
