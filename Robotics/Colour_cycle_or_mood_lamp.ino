int redPin= 3;
int greenPin= 4;
int bluePin= 5;

void setup()
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop()
{
  setColor(255, 0, 0); // Red Color
delay(1000);
setColor(255, 255, 0); // yellow Color
delay(1000);
setColor(0, 255, 0); // Green Color
delay(1000);
setColor(0, 255, 0); // Green Color
delay(1000);
setColor(0, 0, 255); // Blue Color
delay(1000);
setColor(255, 0, 255); // Magenta Color
delay(1000);
}

Void setColorIint redValue, int greenValue, int blueValue)
{

analogWrite(redPin, redValue);
analogWrite(greenPin, greenValue);
analogWrite(bluePin, blueValue);
}
}
