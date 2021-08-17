/**
 * medAzizLHB
 * SkorpTech
 *  BlynkSimpleMKRNB.h
 */

#ifndef BlynkSimpleMKRNB_h
#define BlynkSimpleMKRNB_h

#ifndef BLYNK_INFO_CONNECTION
#define BLYNK_INFO_CONNECTION  "MKRNB"
#endif

#include <MKRNB.h>
#include <Adapters/BlynkArduinoNB.h>

static BlynkArduinoClient _blynkTransport;
BlynkSIM Blynk(_blynkTransport);

#include <BlynkWidgets.h>

#endif
