// enumerated types used in PID and PID_ATune classes

#ifndef PID_TYPES_H
#define PID_TYPES_H

#define CONST_PI 3.14159265358979323846

enum Mode
{
  MANUAL = 0,
  AUTOMATIC = 1
};

enum Direction
{
  DIRECT = 1,
  REVERSE = -1
};

enum Control
{
  ZIEGLER_NICHOLS_PI = 0,	
  ZIEGLER_NICHOLS_PID = 1,
  PESSEN_INTEGRAL_PID,
  SOME_OVERSHOOT_PID,
  NO_OVERSHOOT_PID,
  AMIGOF_PI,
  TYREUS_LUYBEN_PI,
  TYREUS_LUYBEN_PID,
  CIANCONE_MARLIN_PI,
  CIANCONE_MARLIN_PID
};

enum Peak
{
  MINIMUM = -1,
  NOT_A_PEAK = 0,
  MAXIMUM = 1
};

enum AutoTuneState
{
  AUTOTUNER_OFF = 0, 
  STEADY_STATE_AT_BASELINE = 1,
  STEADY_STATE_AFTER_STEP_UP = 2,
  RELAY_STEP_UP = 4,
  RELAY_STEP_DOWN = 8,
  CONVERGED = 16,
  FAILED = 128
};

#endif
