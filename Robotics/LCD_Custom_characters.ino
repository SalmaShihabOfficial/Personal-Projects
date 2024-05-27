#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

// make some custom characters:
byte Hammer[8] = {
  B00100,
  B11111,
  B11111,
  B11111,
  B00100,
  B00100,
  B00100,
  B00100
};

byte Dumbbell[8] =
{
  0b00100,
  0b01110,
  0b11111,
  0b00100,
  0b00100,
  0b11111,
  0b01110,
  0b00100
};

byte Alien[8] = {
  0b11111,
  0b10101,
  0b11111,
  0b11111,
  0b01110,
  0b01010,
  0b11011,
  0b00000
};

byte Trident[8] = {
  B10101,
  B10101,
  B10101,
  B01110,
  B00100,
  B00100,
  B00100,
  B00100
};

byte Speaker[8] = {
  0b00001,
  0b00011,
  0b01111,
  0b01111,
  0b01111,
  0b00011,
  0b00001,
  0b00000
};

byte Sound[8] = {
  0b00001,
  0b00011,
  0b00101,
  0b01001,
  0b01001,
  0b01011,
  0b11011,
  0b11000
};


byte Skull[8] = {
  0b00000,
  0b01110,
  0b10101,
  0b11011,
  0b01110,
  0b01110,
  0b00000,
  0b00000
};


byte Face[8] = {
  B01110,
  B10001,
  B11011,
  B10001,
  B10101,
  B10001,
  B01110,
  B00000
};

void setup() 
{
  lcd.init();
  // Make sure backlight is on       
  lcd.backlight();

  // create a new characters
  lcd.createChar(0, Hammer);
  lcd.createChar(1, Dumbbell);
  lcd.createChar(2, Alien);
  lcd.createChar(3, Trident);
  lcd.createChar(4, Speaker);
  lcd.createChar(5, Sound);
  lcd.createChar(6, Skull);
  lcd.createChar(7, Face);

  // Clears the LCD screen
  lcd.clear();

  // Print a message to the lcd.
  lcd.print("Custom Character");
}

// Print All the custom characters
void loop() 
{ 
  lcd.setCursor(0, 1);
  lcd.write(0);

  lcd.setCursor(2, 1);
  lcd.write(1);

  lcd.setCursor(4, 1);
  lcd.write(2);

  lcd.setCursor(6, 1);
  lcd.write(3);

  lcd.setCursor(8, 1);
  lcd.write(4);

  lcd.setCursor(10, 1);
  lcd.write(5);

  lcd.setCursor(12, 1);
  lcd.write(6);

  lcd.setCursor(14, 1);
  lcd.write(7);

  delay(1000);
}
