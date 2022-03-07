/*
Fade led with potentiometer
By turning the knob on the potentiometer, the brightness of the led change.
*/

int pmval;        //defining pmval as a value
int outval;       //defining outval as a value
int inpin = A5;   //defining A5 as analog input
int outpin = 9;   //defining pin 9 as analog output

void setup() {
  Serial.begin(9600);
}

void loop() {
  pmval = analogRead(inpin);                  //pmval read value of inpin
  outval = map(pmval, 0, 1023, 0, 255);       //map it to the range of the analog out
  analogWrite(outpin, outval);                //write analog value to outpin
  Serial.println(outval);                     //print outval value
  delay(300);                                 //print delay of 300 millisecond
}
