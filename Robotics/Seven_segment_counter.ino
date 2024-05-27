// make an array to save seven Segment pin configuration of numbers

int num_array[10][7] = { { 1,1,1,1,1,1,0 }, //0
{ 0,1,1,0,0,0,0 }, //1
{ 1,1,0,1,1,0,1 }, //2
{ 1,1,1,1,0,0,1 }, //3
{ 0,1,1,0,0,1,1 }, //4
{ 1,0,1,1,0,1,1 }, //5
{ 1,0,1,1,1,1,1 }, //6
{ 1,1,1,0,0,0,0 }, //7
{ 1,1,1,1,1,1,1 }, //8
{ 1,1,1,0,0,1,1 }, //9
};
//function
void Num_Write_to_Seven_Segment(int);
void setup()
{
Serial.begin(9600);
// set pin modes
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}
void loop()
{
for (int counter =0; counter<10; ++counter)
{
delay(1000);
Num_Write_to_Seven_Segment(counter);
}
}
// this function writes values to the seven segment pins
void Num_Write_to_Seven_Segment(int number)
{
int pin = 5;
Serial.print("Number = ");
Serial.println(number);
for (int j=0; j<7; j++) {
digitalWrite(pin, num_array[number][j]);
pin++;
}
}
