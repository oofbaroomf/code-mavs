#include "vex.h"
#include "utils.h"
#include "pid.h"
#include <ctime>
#include <cmath>
#include <thread>

#include "../include/autonomous.h"
#include "motor-control.h"

// IMPORTANT: Remember to add respective function declarations to custom/include/autonomous.h
// Call these functions from custom/include/user.cpp
// Format: returnType functionName() { code }

void exampleAuton() {
  // Use this for tuning linear and turn pid
  moveToPoint(12, 12, 1, 2000, true, 5);
  //swing(45, 1, 1000, true, 5);
  //driveTo(60, 1000, false, 5);
  //wait(500, msec);
  //correct_angle = 0;
  //turnToAngle(90, 450, true, 5);
  //wait(500, msec);
  //correct_angle = 0;
  //turnToAngle(90, 450, true, 5);
  //moveToPoint(12, 24, 1, 1000, true, 5, false);

  
}

void exampleAuton2() {
  moveToPoint(24, 24, 1, 2000, false);
  moveToPoint(48, 48, 1, 2000, true);
  moveToPoint(24, 24, -1, 2000, true);
  moveToPoint(0, 0, 1, 2000, true);
  correct_angle = 0;
  driveTo(24, 2000, false, 8);
  turnToAngle(90, 800, false);
  turnToAngle(180, 800, true);
}

