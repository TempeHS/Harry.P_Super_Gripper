
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

void setup()
{
  myServo.attach(6);
  Serial.begin(9600);
}

void loop()
{
  if(int(detectCentimeters()) < 10){
    Serial.println("Far away");
  }
}