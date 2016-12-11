#include "Arduino.h"

//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	digitalWrite(13,HIGH);
	delay(100);
	digitalWrite(13,LOW);
	delay(100);
	Serial.println("Hello world!");
}

