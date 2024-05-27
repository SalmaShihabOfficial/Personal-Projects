#include <NewPing.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing ultrasonic_sensor(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup()
{
  Serial.begin(9600);   // Open serial monitor at 115200 baud to see ping results
  // Setup Seriel which is useful for debugging
  // Use the Serial Monitor to view printed messages
  Serial.begin(9600) ;
  while (!Serial) ; // wait for serial port to connect. Needed for native USB
  Serial.println("Mep the Distance");
  lcd.init();                         
  lcd.backlight();
  lcd.print("Map the");
  lcd.setCursor(0,1);
  delay(2000);
  lcd.clear();
  lcd.print("By _______");   //your name goes here
  delay(2000);
}
//Main logic of your circuit. It defines the interaction between the components you selected. 
//After setup , it runs over and over again, in an eternal loop.
void loop()
{
  lcd.clear();  //Read distance measurment from Ultrasonic sensor
  int Distance = ultrasonic_sensor.ping_cm();
  delay(10);
  Serial.print(F("Distance: ")); Serial.print(Distance); Serial.println(F("[cm]"));
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(Distance);
  
  Serial.print(F("Distance: ")); Serial.print(Distance/100); Serial.println(F("[m]"));
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(Distance/100);
  lcd.print("m");
  delay(1000);
}
