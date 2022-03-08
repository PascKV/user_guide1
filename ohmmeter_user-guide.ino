/*
 Ohmmeter
 Demonstrates the use a 16x2 LCD display.  

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

*/

// include the library code:
#include <LiquidCrystal.h>
int Ainpin = A0;
int val;
float Vin = 5;
float Vout = 0;
float R1 = 219;
float R2 = 0;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte ohm[] = {                //lcd code for the ohm symbol
  B00000,
  B00000,
  B00000,
  B01110,
  B10001,
  B01010,
  B11011,
  B00000
};

void setup() {
  Serial.begin(9600);         //communiaction
  lcd.begin(16, 2);           //setting lcd
  lcd.createChar(0,ohm);      
  lcd.setCursor(9,0);         //ohm symbol position on the lcd
  lcd.write(byte(0));
}

void loop() {
val = analogRead(Ainpin);     //val read Ainpin
Vout = (Vin*val)/1023;        //Vout is the voltage across the first resistor
R2 = R1*(1/((Vin/Vout)-1));   //calculation to find the unknown resistor
Serial.print(R2);             //print R2 
delay(300);                   //delay time to print

Serial.print("\t");

lcd.setCursor(0,0);           //starting position on the lcd for the value of R2
lcd.print(R2);                //print R2 value on the lcd
}
