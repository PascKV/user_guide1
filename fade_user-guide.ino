/*
Fade program
led fading: gradually getting brighter and same happens when it gets dimmer.
*/

int led = 11;   //led connected to pin 11
void setup() {
}

void loop() {
  //when fadeval is lower or equal to 255 add 5 to fadeval => gets brighter
  for(int fadeval = 0; fadeval <= 255; fadeval += 5){
  analogWrite(led,fadeval);
  delay(100);
  }
  //when fasdeval is greater or equal to 0 subtract 5 from fadeval => gets dimmer
  for(int fadeval = 255; fadeval >= 0; fadeval -= 5){
  analogWrite(led,fadeval);
  delay(100);
  }
}
