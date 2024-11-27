/*
  Purpose: Basic example of a 180deg Micro Servo connected via a Seead Screw Terminal
  Notes: 
    1. Connect to a Digital Pin
    2. 180 Degree ROM 0-180 values
  Author: Harry Pham 25/11/2024
  Contact: harry.pham969@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Servo/
*/

#include <Servo.h>

Servo myServo;  // create servo object to control a servo

static unsigned int degreeOfMovement = 180; 
static unsigned int degreeOfOrigin = 90;

void setup() {
  myServo.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myServo.write(degreeOfMovement);                // sets the servo position according to the set value
  delay(500);                                    // waits for the servo to get there
  myServo.write(degreeOfOrigin);                               // returns the servo to origin
  delay(500);
}