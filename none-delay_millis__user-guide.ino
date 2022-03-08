/*
none-Delay (millis)
when pb is being press the led blink and when pb isn't being press the led stay to its last state either on or off
*/
//defining varaibles
int ledState = LOW;
unsigned long preMillis = 0;
int pb;
void setup() {
//defining pin & communication
pinMode(12,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  
pb = digitalRead(4);            //pb read pin 4
if(pb == 1){                    //when pb is equal to 1 it makes the led blink

  unsigned long ms = millis();
if((ms-preMillis)>=1000){
  preMillis = ms;

  if(ledState == LOW){
    ledState = HIGH;
    }
  else{
    ledState = LOW;
    }
  digitalWrite(12,ledState);    //led state stays the same until pb is press once again
  } 

}
Serial.print(pb);               //print pb value on serial monitor
delay(500);
}
