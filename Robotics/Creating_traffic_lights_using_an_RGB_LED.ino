int redPin= 3;
int greenPin= 5;
int bluePin= 6;
void setup()
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop()
{
setColor(255, 0, 0); // Red Color
delay(5000);
setColor(255, 255, 0); // yellow Color
delay(2000);
setColor(0, 255, 0); // Green Color
delay(3000);
}
void setColor(int redValue, int greenValue, int blueValue)
{
analogWrite(redPin, redValue);
analogWrite(greenPin, greenValue);
analogWrite(bluePin, blueValue);
}
