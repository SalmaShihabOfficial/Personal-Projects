//Line following

void setup()
{
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  //delay(1000); // Wait for 1000 millisecond(s)
  Serial.print("13= ");
  Serial.println(digitalRead(13));
  Serial.print("12= ");
  Serial.println(digitalRead(12));
// White and White
  if (digitalRead(13) == 0 && digitalRead(12) == 0) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    //delay(10); // Wait for 1000 millisecond(s)
  }
// Black and White
  if (digitalRead(13) == 1 && digitalRead(12) == 0) {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    //delay(10); // Wait for 1000 millisecond(s)
  }
// White and Black
  if (digitalRead(13) == 0 && digitalRead(12) == 1) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
//Balck and Black
  if (digitalRead(13) == 1 && digitalRead(12) == 1) {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
}
