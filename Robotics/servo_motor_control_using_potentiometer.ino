#include<Servo.h> // add servo library
Servo myservo;    // create servo object to control a servo
int pot=A0;       // analog pin used to connect the potentiometer
int pot_out;      // variable to read the value from the potentiometer pin
int value;        // After mapping, we need a variable to store the data i.e value

void setup() 
{
  pinMode(pot, INPUT);  //Declaring A0 pin is our INPUT pin
  myservo.attach(7);    //Servo is attaches to the pin 7 
  Serial.begin(9600);   //initialise serial monitor
}

void loop() 
{
  pot_out=analogRead(pot);
  value= map(pot_out, 0, 1023, 0, 180);
  myservo.write(value);
  Serial.println(pot_out);
}
