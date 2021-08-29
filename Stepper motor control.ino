
/*
 Stepper Motor Control - speed control

 
 The motor is attached to digital pins 8, 9, 10, 11 of the Arduino.
 A potentiometer is connected to analog 0.

 The higher the potentiometer value, the faster the motor speed.

 * by medAzizLHB
 * SkorpTech

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;



Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;

void setup() {
}

void loop() {
  
  int sensorReading = analogRead(A0);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }
}
