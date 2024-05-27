//Human following

#define MLa 8 //left motor 1st pin
#define MLb 9 //left motor 2nd pin
#define MRa 10 //right motor 1st pin
#define MRb 11 //right motor 2nd pin
#define left_LDR 3
#define right_LDR 4
void setup()
{
pinMode(left_LDR, INPUT);
pinMode(right_LDR, INPUT);
pinMode(MLa, OUTPUT);
pinMode(MLb, OUTPUT);
pinMode(MRa, OUTPUT);
pinMode(MRb, OUTPUT);
Serial.begin(9600);
}
void loop()
{

if (digitalRead(left_LDR) == HIGH && digitalRead(right_LDR) == HIGH)
{
digitalWrite(MLa, LOW);
digitalWrite(MLb, LOW);
digitalWrite(MRa, LOW);
digitalWrite(MRb, LOW);
}
if (digitalRead(left_LDR) == LOW &&
digitalRead(right_LDR) == LOW)
{
digitalWrite(MLa, HIGH);
digitalWrite(MLb, LOW);
digitalWrite(MRa, HIGH);
digitalWrite(MRb, LOW);
}
if (digitalRead(left_LDR) == LOW &&
digitalRead(right_LDR) == HIGH)
{
digitalWrite(MLa, LOW);
digitalWrite(MLb, LOW);
digitalWrite(MRa, HIGH);
digitalWrite(MRb, LOW);
}

if (digitalRead(left_LDR) == HIGH &&
digitalRead(right_LDR) == LOW)
{
digitalWrite(MLa, HIGH);
digitalWrite(MLb, LOW);
digitalWrite(MRa, LOW);
digitalWrite(MRb, LOW);
}
}
