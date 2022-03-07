/*
Light chaser

*/
int led1 = 5;   //led1 connected to pin 5
int led2 = 9;   //led2 connected to pin 9
int led3 = 13;  //led3 connected to pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(500);
  digitalWrite(led3,LOW);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
}
