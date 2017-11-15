        /*Simple_PB_LED_V1   */

const byte LEDpin = 3;
const byte SWITCHpin = 2;
unsigned long time;

byte LEDstate = LOW;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
  pinMode(SWITCHpin, INPUT);
  digitalWrite(SWITCHpin, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
  LEDstate = digitalRead(SWITCHpin);
  time = millis();
  Serial.println(time);
   delay (100);
  Serial.print("Time: ");
  LEDstate=!LEDstate;
  digitalWrite(LEDpin, LEDstate);
} 
