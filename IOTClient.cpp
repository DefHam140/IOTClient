#include "IOTClient.h"

IOTClient::IOTClient() {
	
	Serial.begin(115200);
   Serial.println("IOT Initial");
}

void IOTClient::begin() {
   Serial.println("IOT Begin");
}

int IOTClient::add(int a, int b) {
   return a + b;
}
