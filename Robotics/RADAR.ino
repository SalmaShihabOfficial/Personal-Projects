#include <Servo.h>
#include<NewPing.h>
#define trigPin  10
#define echoPin  11
#define Max_Distance 200

NewPing radar(trigPin, echoPin, Max_Distance);
int distinCM;
Servo radarServo;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  radarServo.attach(12);
}
void loop() 
{
  for(int i=0;i<=180;i++)
  {
    radarServo.write(i);
    delay(50);
    
    distinCM = radar.ping_cm();  
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
  
  for(int i=180;i>=0;i--)
  {
    radarServo.write(i);
    delay(50);
    
    distinCM = radar.ping_cm();
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
}
