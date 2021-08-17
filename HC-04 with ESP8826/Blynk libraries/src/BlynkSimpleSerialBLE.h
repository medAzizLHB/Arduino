/**
 * medAzizLHB
 * SkorpTech
 */
#ifndef BlynkSerialBLE_h
#define BlynkSerialBLE_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION "SerialBLE"
#endif

#define BLYNK_SEND_ATOMIC
#define BLYNK_SEND_CHUNK      20
#define BLYNK_SEND_THROTTLE   40
#define BLYNK_NO_INFO

#include <Adapters/BlynkSerial.h>

BlynkTransportStream _blynkTransport;
BlynkStream Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
