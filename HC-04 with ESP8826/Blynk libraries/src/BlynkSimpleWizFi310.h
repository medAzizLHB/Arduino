/**
 * medAzizLHB
 * SkorpTech
 */#ifndef BlynkSimpleWizFi310_h
#define BlynkSimpleWizFi310_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "WizFi310"
#endif

#define BLYNK_SEND_ATOMIC
#define BLYNK_SEND_CHUNK 64

#include <WizFi310.h>
#include <Adapters/BlynkWiFiCommon.h>

static WiFiClient _blynkWifiClient;
static BlynkArduinoClient _blynkTransport(_blynkWifiClient);
BlynkWifiCommon Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
