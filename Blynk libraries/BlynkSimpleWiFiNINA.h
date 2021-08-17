/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleWiFiNINA_h
#define BlynkSimpleWiFiNINA_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "WiFiNINA"
#endif

#define BLYNK_SEND_ATOMIC
//#define BLYNK_USE_SSL

#include <WiFiNINA.h>
#include <Adapters/BlynkWiFiCommon.h>

//static WiFiSSLClient _blynkWifiClient;
static WiFiClient _blynkWifiClient;

static BlynkArduinoClient _blynkTransport(_blynkWifiClient);
BlynkWifiCommon Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
