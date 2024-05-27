{
Serial.begin(9600);
// set pin modes
pinMode (5,OUTPUT);
pinMode (6,OUTPUT);
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
pinMode (11,OUTPUT);
}
void loop()
{
digitalWrite (5,HIGH);
delay(500);
digitalWrite (6,HIGH);
digitalWrite (10,HIGH);
delay(500);
digitalWrite (11,HIGH);
delay(500);
digitalWrite (7,HIGH);
digitalWrite (9,HIGH);
delay(500);
digitalWrite (8,HIGH);
delay(500);
digitalWrite (5,LOW);
delay(500);
digitalWrite (6,LOW);
digitalWrite (10,LOW);
delay(500);
digitalWrite (11,LOW);
delay(500);
digitalWrite (7,LOW);
digitalWrite (9,LOW);
delay(500);
digitalWrite (8,LOW);
delay(500);
}
