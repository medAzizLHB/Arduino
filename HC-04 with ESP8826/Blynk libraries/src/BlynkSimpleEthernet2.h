/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleEthernet2_h
#define BlynkSimpleEthernet2_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "W5500"
#endif

#include <Ethernet2.h>
#include <EthernetClient.h>
#include <Adapters/BlynkEthernet.h>

static EthernetClient _blynkEthernetClient;
static BlynkArduinoClient _blynkTransport(_blynkEthernetClient);
BlynkEthernet Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
