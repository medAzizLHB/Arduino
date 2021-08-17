/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleWiFiShield101_h
#define BlynkSimpleWiFiShield101_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "WiFi101"
#endif

#include <WiFi101.h>
#include <Adapters/BlynkWiFiCommon.h>

static WiFiClient _blynkWifiClient;
static BlynkArduinoClient _blynkTransport(_blynkWifiClient);
BlynkWifiCommon Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
