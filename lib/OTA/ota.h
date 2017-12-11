#ifndef ota_h
  #define ota_h

  #include <WiFi.h>
  #include <ESPmDNS.h>
  #include <WiFiUdp.h>
  #include <ArduinoOTA.h>

  class otaclass {
    public:
      otaclass();
      void SETUP(const char *&ap_ssid, const char *&ap_password, const char *&hostname, const char *&password);
      void SETUP(const char *&ap_ssid, const char *&ap_password, const char *&hostname);
      void HANDLE();
  };

  extern otaclass ota;
#endif
