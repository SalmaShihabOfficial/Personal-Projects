//Build a Motion Robot

#define MLa 8 //left motor 1st pin
#define MLb 9 //left motor 2nd pin
#define MRa 10 //right motor 1st pin
#define MRb 11 //right motor 2nd pin
void setup() {
  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
}
void loop() {
  //stop both the motors//
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
  delay(1000); //wait for 1 second// 
  
  //Rotate both Motors in Forward Direction//
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  delay(2000); //wait for 2 second// 
  
  //Rotate both Motors in Backward Direction//
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
  delay(2000); //wait for 2 second// 
  
  //Rotate both Motors in left Direction//
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
  delay(2000); //wait for 2 second// 
  
  //Rotate both Motors in right Direction//
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  delay(2000); //wait for 2 second//
}