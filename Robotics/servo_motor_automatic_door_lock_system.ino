#include <Servo.h>
Servo myservo;
int ir_sensor = 6;
int ir_data;

void setup()
{
  pinMode(ir_sensor, INPUT);
  Serial.begin(9600);
  myservo.attach(7);
  myservo.write(90);  //Angle of the servo in locked position
  delay(1000) ;
}
void loop() 
{
  ir_data = digitalRead(ir_sensor);
  if(ir_data == LOW)
  {
    myservo.write(180);
    delay(500);
    Serial.println("Door unlocked");
    delay(5000);    //increase the delay according to your convenience
    Serial.println("5 sec completed,Door locked again");
  }
}
