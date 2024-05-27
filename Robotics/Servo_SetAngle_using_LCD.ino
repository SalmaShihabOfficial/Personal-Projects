#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);
#include<Servo.h>
int data=0;
Servo myservo;

void setup()
{
  Serial.begin(9600);
  myservo.attach(8);
  lcd.init();
  //lcd.clear();         
  
  lcd.begin(16,2);
  lcd.backlight();
}

void loop()
{
  if(Serial.available()>0)
  {
    delay(100);
    lcd.clear();
    data = Serial.parseInt();
    myservo.write(data);
    while(Serial.available() > 0)
    {
      
      lcd.write(data);
    }
  }
}
