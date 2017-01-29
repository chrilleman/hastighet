#include "Arduino.h"

int counter = 0;

//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	pinMode(13, OUTPUT);
	Serial.begin(9600);

	SetupSensor();
	SetupStorage();
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	digitalWrite(13,HIGH);
	delay(100);
	digitalWrite(13,LOW);
	delay(100);
	Serial.println(counter++,DEC);
	//Get sensor data
	//Write to storage


	char* str;
	str = GetSensorData();
	Serial.println(str);
}

/*************************** SENSOR ******************************/

char* SensorRawData;

void SetupSensor()
{
	//SetupSensors
	SensorRawData = (char*)malloc(50*sizeof(char));
}
char* GetSensorData()
{

	sprintf(SensorRawData,"Sensor Data");
	return SensorRawData;

	//Get data from first sensor
	//Wait for data from next sensor, the same sensor or timeout
	//Return
}

/*************************** END SENSOR ******************************/

/*************************** STORAGE ******************************/
void SetupStorage()
{

}

void WriteToStorage(char* data)
{
	//add time stamp to data
	//Write data to sd-card
}
/*************************** END STORAGE ******************************/

