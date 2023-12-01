#include <IOTClient.h>

IOTClient mclient;

void setup() {
  Serial.begin(115200);
  mclient.begin();
  int a = mclient.add(1, 2);
  int b = mclient.add(3, 4);
  Serial.printf("add = %d : %d\n", a, b);
}

void loop() {
  // put your main code here, to run repeatedly:

}
