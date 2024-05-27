#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
  lcd.print("Hindi  English  Maths  Physics Chemistry");
  lcd.setCursor(0,1);
  lcd.print(" 90       86     91       92       71   ");
  
}

void loop() 
{
  delay(1000);
  for(int positionCounter=0; positionCounter<24; positionCounter++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }
  delay(1000);
  
  for(int positionCounter=0; positionCounter<24; positionCounter++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
  delay(1000);
  
}
