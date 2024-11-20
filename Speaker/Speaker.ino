//Set up Speaker and set to pin 5

#define SPEAKER 5

//Currently unknown
int BassTab[]={1911};//bass 1~7

//Setup function
void setup()
{
    pinInit();
}
void loop()
{
        //play sound from notes 1 -7
    for(int note_index=0;note_index<7;note_index++)
    {
        sound(note_index);
        delay(500);
    }
}
void pinInit()
{
    pinMode(SPEAKER,OUTPUT);
    digitalWrite(SPEAKER,LOW);
}
void sound(uint8_t note_index)
{
    for(int i=0;i<100;i++)
    {
        digitalWrite(SPEAKER,HIGH);
        delayMicroseconds(BassTab[note_index]);
        digitalWrite(SPEAKER,LOW);
        delayMicroseconds(BassTab[note_index]);
    }
}