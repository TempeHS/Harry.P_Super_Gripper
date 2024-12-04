
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

#define SPEAKER 7

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

static unsigned int degreeOfMovement = 180;
static unsigned int degreeOfOrigin = 90;

static unsigned int red_LED = 8;

Ultrasonic myUltrasonicSensor(A3); //set ultrasonic to pin 7

int BassTab[]={1911};

void setup()
{
  Servo1.attach(2);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(5);
  Servo5.attach(6);

  Servo1.write(degreeOfOrigin);
  Servo2.write(degreeOfOrigin);
  Servo3.write(degreeOfOrigin);
  Servo4.write(degreeOfOrigin);
  Servo5.write(degreeOfOrigin);

  pinMode(SPEAKER,OUTPUT);
  digitalWrite(SPEAKER,LOW);

  pinMode(red_LED, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  long RangeInCentimeters;
  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  if( RangeInCentimeters <= 7)
  {
    Serial.println("Close up");

    Servo1.write(degreeOfMovement);
    Servo2.write(degreeOfMovement);
    Servo3.write(degreeOfMovement);
    Servo4.write(degreeOfMovement);
    Servo5.write(degreeOfMovement);

    sound(0);
    digitalWrite(red_LED, HIGH);
  } else
  {
    Serial.println("Far away");
    Servo1.write(degreeOfOrigin);
    Servo2.write(degreeOfOrigin);
    Servo3.write(degreeOfOrigin);
    Servo4.write(degreeOfOrigin);
    Servo5.write(degreeOfOrigin);
    digitalWrite(red_LED, LOW);
  }

  delay(50);
}