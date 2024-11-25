
// Documentation:
// https://wiki.seeedstudio.com/Grove-Speaker/
/*
  Author: Harry Pham 25/11/2024
  Contact: harry.pham969@det.nsw.edu.au
*/
//Set up Speaker and set to pin 5
#define SPEAKER 5

//Set up Bool check

//Set Bass Sound
int BassTab[]={1911};

//Setup function
void setup()
{
    pinMode(SPEAKER,OUTPUT);
    digitalWrite(SPEAKER,LOW);
}
//Start Loop
void loop()
{
  sound(0);
  delay(500);
}

void sound(uint8_t note_index)
{
    for(int i=0;i<10;i++)
    {
        digitalWrite(SPEAKER,HIGH);
        delayMicroseconds(BassTab[note_index]);
        digitalWrite(SPEAKER,LOW);
        delayMicroseconds(BassTab[note_index]);
    }
}