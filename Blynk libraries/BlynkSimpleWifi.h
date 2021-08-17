/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleWifi_h
#define BlynkSimpleWifi_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "HDG204"
#endif

// Fix for WiFi shield (it has a crazy ping duration)
#define BLYNK_TIMEOUT_MS 6000UL
#define BLYNK_SEND_ATOMIC
#define BLYNK_SEND_CHUNK 64

#include <WiFi.h>
#include <Adapters/BlynkWiFiCommon.h>

static WiFiClient _blynkWifiClient;
static BlynkArduinoClient _blynkTransport(_blynkWifiClient);
BlynkWifiCommon Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
