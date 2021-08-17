/**
 * medAzizLHB
 * SkorpTech
 */
#ifndef BlynkSimpleEthernet_h
#define BlynkSimpleEthernet_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "W5100"
#endif

#include <Ethernet.h>
#include <EthernetClient.h>
#include <Adapters/BlynkEthernet.h>

static EthernetClient _blynkEthernetClient;
static BlynkArduinoClient _blynkTransport(_blynkEthernetClient);
BlynkEthernet Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
