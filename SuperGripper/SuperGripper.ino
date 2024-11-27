
/*
Ultrasonic Sensor
Servo Motor:
https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Servo_Motor
Speaker:
https://wiki.seeedstudio.com/Grove-Speaker/
LED Light:
https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Red_LED
*/
#include "Ultrasonic.h"
#include <Servo.h>

Servo myServo;

static unsigned int degreeOfMovement = 180;
static unsigned int degreeOfOrigin = 90;

Ultrasonic myUltrasonicSensor(7); //set ultrasonic to pin 7


void setup()
{
  myServo.attach(6); 
  Serial.begin(9600);
  myServo.write(degreeOfOrigin);
}

void loop()
{
  long RangeInCentimeters;
  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  if( RangeInCentimeters <= 7)
  {
    Serial.println("Close up");
    myServo.write(degreeOfMovement);
  } else
  {
    Serial.println("Far away");
    myServo.write(degreeOfOrigin);
  }
  delay(50);
}