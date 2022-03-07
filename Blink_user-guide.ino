/*
Blinking LED
LED turns on then turns off repeatedly with a delay of half a second.
*/

int led = 13;   //defining pin 13 as digital output

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);   //turn on led
  delay(500);               //wait half a second
  digitalWrite(led,LOW);    //turn off led
  delay(500);               //wait half a second
}
