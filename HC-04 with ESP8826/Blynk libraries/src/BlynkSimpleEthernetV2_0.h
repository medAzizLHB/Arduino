/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleEthernetV2_0_h
#define BlynkSimpleEthernetV2_0_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "W5200"
#endif

#include <EthernetV2_0.h>
#include <Adapters/BlynkEthernet.h>

static EthernetClient _blynkEthernetClient;
static BlynkArduinoClient _blynkTransport(_blynkEthernetClient);
BlynkEthernet Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
