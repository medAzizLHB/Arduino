/**
 * medAzizLHB
 * SkorpTech
 * BlynkSimpleStream.h
 */

#ifndef BlynkSimpleStream_h
#define BlynkSimpleStream_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "Stream"
#endif

#include <Adapters/BlynkSerial.h>

BlynkTransportStream _blynkTransport;
BlynkStream Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
