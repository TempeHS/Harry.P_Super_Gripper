void detectCentimeters()
{
  long RangeInCentimeters;
  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(20);
  return RangeInCentimeters
}