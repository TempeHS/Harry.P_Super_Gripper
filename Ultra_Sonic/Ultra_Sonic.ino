/*
  Purpose: To detect closest distance
  Notes: Connect to a digital PIN
  Author: Harry Pham 25/11/2024
  Contact: harry.pham969@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Ultrasonic_Ranger/
  Library Source: https://github.com/Seeed-Studio/Seeed_Arduino_UltrasonicRanger
*/

// We are including a library for ultrasonic
#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(7);
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(20);
}