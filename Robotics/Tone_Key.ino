const int sw1pin = 6;
const int sw3pin = 0;
const int sw2pin = 7;
const int soundpin = 8;
void setup()
{
pinMode(sw1pin, OUTPUT);
pinMode(sw2pin, INPUT_PULLUP);
pinMode(soundpin, OUTPUT);
}
void loop()

{
 digitalWrite(sw1pin,LOW);
 if (!digitalRead(sw2pin))
{
tone(soundpin, 400);
}
else if (sw3pin == 0)
{
tone(soundpin, 200);
}
else
{
noTone(soundpin);
}
}
