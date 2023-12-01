#ifndef IOTClient_h
#define IOTClient_h

#include "Arduino.h"

class IOTClient {
public:
   IOTClient();  // Constructor
   void begin();
   int add(int a, int b);
private:
   // Private members
};

#endif
