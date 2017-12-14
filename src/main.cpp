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
