//Maze Solving Robot

#include <Servo.h>
#include <NewPing.h>

#define MLa 8  // left motor 1st pin
#define MLb 9  // left motor 2nd pin
#define MRa 10 // right motor 1st pin
#define MRb 11 // right motor 2nd pin
#define trigpin 5
#define echopin 6
#define maximum_distance 200

boolean movestraight = false;
int distance = 100;

NewPing sonar(trigpin, echopin, maximum_distance);
Servo servo_pin;

void setup() {
  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
  servo_pin.attach(7);
  servo_pin.write(115);
  delay(2000);
  distance = readPing();
  delay(100);
  Serial.begin(9600);
}

void loop() {
  int distanceright = 0;
  int distanceleft = 0;
  delay(100);
  Serial.println(distance);

  if (distance <= 15) { // you can set the distance according to your requirements
    movestop();
    delay(300);
    movebackward();
    delay(200);
    movestop();
    delay(300);
    distanceright = lookright();
    delay(300);
    distanceleft = lookleft();
    delay(300);

    if (distance >= distanceleft) {
      turnright();
      delay(100);
      movestop();
    } else {
      turnleft();
      delay(100);
      movestop();
    }
  } else {
    moveforward();
  }

  distance = readPing();
}

int lookright() {
  servo_pin.write(50);
  delay(400);
  int distance = readPing();
  delay(100);
  servo_pin.write(115);
  return distance;
}

int lookleft() {
  servo_pin.write(170);
  delay(400);
  int distance = readPing();
  delay(100);
  servo_pin.write(115);
  return distance;
}

int readPing() {
  delay(50);
  int cm = sonar.ping_cm();
  if (cm == 0) {
    cm = 250;
  }
  return cm;
}

void movestop() {
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
}

void moveforward() {
  if (!movestraight) {
    movestraight = true;
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
    digitalWrite(MLa, HIGH);
    digitalWrite(MLb, LOW);
  }
}

void movebackward() {
  movestraight = false;
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
}

void turnright() {
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
  delay(500);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
}

void turnleft() {
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  delay(500);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
}
