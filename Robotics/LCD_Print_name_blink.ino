#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Venkatesh");
}

void loop() 
{
  lcd.display();
  delay(2000);
  lcd.noDisplay();
  delay(2000);
}
