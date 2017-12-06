const byte LEDpin = 3;
const byte SWITCHpin = 2;

int ledPin =  3;      // the number of the LED pin
int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated
long OnTime = 250;           // milliseconds of on-time
long OffTime = 750;          // milliseconds of off-time
long interval = 100;

 
byte LEDstate = LOW;
//byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() 
{
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);      
  pinMode(SWITCHpin, INPUT);
  digitalWrite(SWITCHpin, HIGH);

}
 
void loop()
{
  // check to see if it's time to change the state of the LED
  unsigned long currentMillis = millis();
 
   SWITCHstate = digitalRead(SWITCHpin);
 
  if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
  {

   unsigned long currentMillis = millis();
 
    if(currentMillis - previousMillis > interval){
    previousMillis = currentMillis;   

      LEDstate = !LEDstate;
      digitalWrite(LEDpin, LEDstate);
    } 
}
lastSWITCHstate = SWITCHstate;

}
