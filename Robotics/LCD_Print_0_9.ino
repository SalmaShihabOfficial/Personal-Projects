#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

const int numRows  = 2;
const int numCols = 16;

void setup() 
{
  lcd.init();
  lcd.backlight();
}

void loop() 
{
  lcd.setCursor(0,0);
  lcd.print('0');
  delay(1000);
  
  lcd.setCursor(1,1);
  lcd.print('1');
  delay(1000);
  
  lcd.setCursor(2,0);
  lcd.print('2');
  delay(1000);

  lcd.setCursor(3,1);
  lcd.print('3');
  delay(1000);

  lcd.setCursor(4,0);
  lcd.print('4');
  delay(1000);

  lcd.setCursor(5,1);
  lcd.print('5');
  delay(1000);

  lcd.setCursor(6,0);
  lcd.print('6');
  delay(1000);

  lcd.setCursor(7,1);
  lcd.print('7');
  delay(1000);

  lcd.setCursor(8,0);
  lcd.print('8');
  delay(1000);

  lcd.setCursor(9,1);
  lcd.print('9');
  delay(1000);

  lcd.clear();
  delay(1000);
}
