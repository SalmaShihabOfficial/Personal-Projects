//Obstacle avoiding Robot SONAR
#define trigPin 6 // Trig Pin Of HC-SR04
#define echoPin 7 // Echo Pin Of HC-SR04
#define MLa 8 // left motor 1st pin
#define MLb 9 // left motor 2nd pin
#define MRa 10 // right motor 1st pin
#define MRb 11 // right motor 2nd pin
long duration, distance;
void setup() {
  Serial.begin(9600);
  pinMode(MLa, OUTPUT); // Set Motor Pins As O/P
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
  pinMode(trigPin, OUTPUT); // Set Trig Pin As O/P To Transmit Waves
  pinMode(echoPin, INPUT); //Set Echo Pin As I/P To Receive Reflected Waves
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // Transmit Waves For 10us
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH); // Receive Reflected Waves
  distance = duration / 58.2; // Get Distance
  Serial.println(distance);
  delay(10);
  if (distance > 15) { // Condition For Absence Of Obstacle
    digitalWrite(MRb, HIGH); // Move Forward
    digitalWrite(MRa, LOW);
    digitalWrite(MLb, HIGH);
    digitalWrite(MLa, LOW);
  }
  if (distance > 15) { // Condition For Absence Of Obstacle
    digitalWrite(MLa, HIGH); // Move Forward
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
  }
  else if ((distance < 10) && (distance > 0)) { // Condition For Presence Of Obstacle
    digitalWrite(MLa, LOW); //Stop
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
    delay(100);
    digitalWrite(MLa, LOW); // Move Backward
    digitalWrite(MLb, HIGH);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, HIGH);
    delay(500);
    digitalWrite(MLa, LOW); //Stop
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
    delay(100);
    digitalWrite(MLa, LOW); // Move Left
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
    delay(500);
  }
}