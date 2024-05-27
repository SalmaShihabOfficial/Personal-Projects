int redPin= 3;
int greenPin= 5;
int bluePin= 6;

void setup()
{
Serial.begin(9600);
pinMode (redPin,OUTPUT);
pinMode (greenPin,OUTPUT);
pinMode (bluePin,OUTPUT);
}

void loop()
{
int R = 255;
int G = 0;
int B = 0;

for (int i = 0; i<255; i++)
{
setColor(R ,G ,B);
delay(20);
G++;
}
Serial.print("R = ");
Serial.println(R);
Serial.print("G = ");
Serial.println(G);
Serial.print("B = ");
Serial.println(B);
if(G==255)
{
for (int i = 0; i<255; i++)
{
setColor(R ,G ,B);
delay(20);
R--;
}
Serial.print("R = ");
Serial.println(R);
Serial.print("G = ");
Serial.println(G);
Serial.print("B = ");
Serial.println(B);
}
}

void setColor(int redValue, int greenValue, int blueValue)
{
analogWrite(redPin, redValue);
analogWrite(greenPin, greenValue);
analogWrite(bluePin, blueValue);
}
