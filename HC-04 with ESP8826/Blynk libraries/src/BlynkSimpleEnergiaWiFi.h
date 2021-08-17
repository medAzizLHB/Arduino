/*
* medAzizLHB
* SkorpTech
* BlynkSimpleEnergiaWiFi.h
*/
#ifndef BlynkSimpleEnergiaWiFi_h
#define BlynkSimpleEnergiaWiFi_h

#include <WiFi.h>
#include <Adapters/BlynkWiFiCommon.h>

static WiFiClient _blynkWifiClient;
static BlynkArduinoClient _blynkTransport(_blynkWifiClient);
BlynkWifiCommon Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
