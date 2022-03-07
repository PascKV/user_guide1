/*
Push Button program
when push button is press a voltage of 5V will go to the pin and across the resistor.
*/
int pbval;    //defining pbval as a variable

void setup() {
  
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  pbval = digitalRead(8);   //read val from pin 8
  Serial.println(pbval);    //print pb val
  delay(1000);              //print speed
}
