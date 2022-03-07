/*
RGB color change with potentiometer
By teisting the knob of the potentiometer, the RGB led will change color
*/

int red = 9;                 //RGB redpin connected to pin 9
int green = 10;              //RGB greenpin connected to pin 10
int blue = 11;               //RGB bluepin connected to pin 11
int pmval;                   //defining pmval as a variable
int inpin = A3;              //A3 is an analog input

void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  pmval = analogRead(inpin);  //pmval read inpin value
  if (pmval<250){             //only when pmval value is less than 250 that the red led turns on
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  }
  else if (pmval<700){        //only when pmval value is in between 250 and 700 the green led turns on
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  }
  else{                      //only when pmval value is neither less than 250 or 250-700 the blue led turns on
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  }
}
