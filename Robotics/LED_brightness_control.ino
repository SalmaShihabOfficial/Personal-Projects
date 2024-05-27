int sensor=A0;
int output=9;
void setup()
{
pinMode(output, OUTPUT);
}
void loop()
{
int reading=analogRead(sensor);
int bright=reading/4;
delay(500);
analogWrite(output, bright);
}
