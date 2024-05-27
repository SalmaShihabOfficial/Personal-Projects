void setup() 
{
pinMode (6, INPUT) ;
pinMode (5, OUTPUT) ;
Serial.begin(9600);     //initialise serial monitor
}
 
void loop() 
{
  int ldrval=digitalRead (6);     //assign value of LDR sensor to a temporary variable
  Serial.println("Intensity=");   //print on serial monitor using ""
  Serial.println(ldrval);   //display output on serial monitor
  delay (300) ;
  if (ldrval==HIGH)     //HIGH means, light got blocked
  {
    digitalWrite(5,HIGH) ;    //if light is not present,LED on
  }
  else
  {
  digitalWrite(5,LOW) ;     //if light is present,LED off
  }
}
