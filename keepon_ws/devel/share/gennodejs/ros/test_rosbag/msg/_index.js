
"use strict";

let MigratedExplicit = require('./MigratedExplicit.js');
let MigratedMixed = require('./MigratedMixed.js');
let MigratedImplicit = require('./MigratedImplicit.js');
let SubUnmigrated = require('./SubUnmigrated.js');
let Converged = require('./Converged.js');
let MigratedAddSub = require('./MigratedAddSub.js');
let SimpleMigrated = require('./SimpleMigrated.js');
let PartiallyMigrated = require('./PartiallyMigrated.js');
let Simple = require('./Simple.js');
let Unmigrated = require('./Unmigrated.js');
let Constants = require('./Constants.js');
let Renamed5 = require('./Renamed5.js');

module.exports = {
  MigratedExplicit: MigratedExplicit,
  MigratedMixed: MigratedMixed,
  MigratedImplicit: MigratedImplicit,
  SubUnmigrated: SubUnmigrated,
  Converged: Converged,
  MigratedAddSub: MigratedAddSub,
  SimpleMigrated: SimpleMigrated,
  PartiallyMigrated: PartiallyMigrated,
  Simple: Simple,
  Unmigrated: Unmigrated,
  Constants: Constants,
  Renamed5: Renamed5,
};
