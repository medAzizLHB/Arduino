/*
* medAzizLHB
* SkorpTech
* BlynkSimpleEnergiaEthernet.h
*/

#ifndef BlynkSimpleEnergiaEthernet_h
#define BlynkSimpleEnergiaEthernet_h

#include <Ethernet.h>
#include <EthernetClient.h>
#include <Adapters/BlynkEthernet.h>

static EthernetClient _blynkEthernetClient;
static BlynkArduinoClient _blynkTransport(_blynkEthernetClient);
BlynkEthernet Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
