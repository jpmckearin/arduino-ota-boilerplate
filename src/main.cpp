// #include <Arduino.h>

// void setup()
// {
//   Serial.begin(115200);
// }

// void loop()
// {
//   delay(1000);
//   Serial.println("Hello World!");
// }

#include "variables.h"
#include "ota.h"

extern const char *AP_SSID;
extern const char *AP_PASSWORD;
extern const char *HOSTNAME;

void setup()
{
  ota.SETUP(AP_SSID, AP_PASSWORD, HOSTNAME);
}

void loop()
{
  ota.HANDLE();
}
