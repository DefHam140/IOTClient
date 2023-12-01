#include <IOTClient.h>

IOTClient mclient;

void setup() {
  Serial.begin(115200);
  mclient.begin();
  int a = mclient.add(1, 2);
  Serial.printf("add = %d\n", a);
}

void loop() {
  // put your main code here, to run repeatedly:

}
