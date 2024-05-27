#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 in PCF8574 by NXP and Set to 0x3F in PCF8574A by Ti
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

//Left Arrow
 byte l1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00011,
  B00111,
  B01111
};

byte l2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11110,
  B11110
};

byte l3[8] = {
  B01111,
  B00111,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000
};

byte l4[8] = {
  B11110,
  B11110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//Female
byte f1[8] = {
  B00000,
  B00001,
  B00011,
  B00011,
  B00001,
  B00111,
  B01011,
  B10011
};

byte f2[8] = {
  B00000,
  B10000,
  B11000,
  B11000,
  B10000,
  B11100,
  B11010,
  B11001
};

byte f3[8] = {
  B00011,
  B00111,
  B01111,
  B11111,
  B00010,
  B00010,
  B00010,
  B00010
};

byte f4[8] = {
  B11000,
  B11100,
  B11110,
  B11111,
  B01000,
  B01000,
  B01000,
  B01000
};

//Male

byte m1[8] = {
  B00000,
  B00001,
  B00011,
  B00011,
  B00001,
  B00111,
  B01111,
  B01011
};

byte m2[8] = {
  B00000,
  B10000,
  B11000,
  B11000,
  B10000,
  B11100,
  B11110,
  B11010
};

byte m3[8] = {
  B01011,
  B01011,
  B00011,
  B00011,
  B00010,
  B00010,
  B00010,
  B00010
};

byte m4[8] = {
  B11010,
  B11010,
  B11000,
  B11000,
  B01000,
  B01000,
  B01000,
  B01000
};

//Right Arrow
byte r1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01111,
  B01111
};

byte r2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B11000,
  B11100,
  B11110
};

byte r3[] = {
  B01111,
  B01111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte r4[] = {
  B11110,
  B11100,
  B11000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000
};

void setup() 
{
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
  //Left Arrow
  lcd.createChar(0, l1);
  lcd.createChar(1, l2);
  lcd.createChar(2, l3);
  lcd.createChar(3, l4);
//Female
  lcd.createChar(4, f1);
  lcd.createChar(5, f2);
  lcd.createChar(6, f3);
  lcd.createChar(7, f4);
  
//Male
  lcd.createChar(8, m1);
  lcd.createChar(9, m2);
  lcd.createChar(10, m3);
  lcd.createChar(11, m4);

//Right Arrow
  lcd.createChar(12, r1);
  lcd.createChar(13, r2);
  lcd.createChar(14, r3);
  lcd.createChar(15, r4);
 
}

void loop() 
{ 
  
//Left Arrow
  lcd.setCursor(0, 0);
  lcd.write(0);
  lcd.setCursor(1, 0);
  lcd.write(1);
  lcd.setCursor(0, 1);
  lcd.write(2);
  lcd.setCursor(1, 1);
  lcd.write(3);
 
//Female
  lcd.setCursor(2, 0);
  lcd.write(4);
  lcd.setCursor(3, 0);
  lcd.write(5);
  lcd.setCursor(2, 1);
  lcd.write(6);
  lcd.setCursor(3, 1);
  lcd.write(7);

//Male
  lcd.setCursor(12, 0);
  lcd.write(8);
  lcd.setCursor(13, 0);
  lcd.write(9);
  lcd.setCursor(12, 1);
  lcd.write(10);
  lcd.setCursor(13, 1);
  lcd.write(11);

//Right Arrow
  lcd.setCursor(14,0);
  lcd.write(12);
  lcd.setCursor(15,0);
  lcd.write(13);
  lcd.setCursor(14,1);
  lcd.write(14);
  lcd.setCursor(15,1);
  lcd.write(15);
}
