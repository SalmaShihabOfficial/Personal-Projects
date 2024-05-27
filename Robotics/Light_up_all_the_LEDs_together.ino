void setup()
{
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}
void loop()
{
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
}
