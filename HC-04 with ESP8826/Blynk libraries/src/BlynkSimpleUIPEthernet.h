/**
 * medAzizLHB
 * SkorpTech
 */

#ifndef BlynkSimpleUipEthernet_h
#define BlynkSimpleUipEthernet_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "ENC28J60"
#endif

#define BLYNK_ENC28J60_FIX
#include <UIPEthernet.h>
#include <Adapters/BlynkEthernet.h>

static EthernetClient _blynkEthernetClient;
static BlynkArduinoClient _blynkTransport(_blynkEthernetClient);
BlynkEthernet Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
