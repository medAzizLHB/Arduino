/**
 * medAzizLHB
 * SkorpTech
 */
#ifndef WidgetMap_h
#define WidgetMap_h

#include <Blynk/BlynkWidgetBase.h>

class WidgetMap
    : public BlynkWidgetBase
{
public:
    WidgetMap(uint8_t vPin) : BlynkWidgetBase(vPin) {}

    void clear() {
        Blynk.virtualWrite(mPin, "clr");
    }

    template<typename T1, typename T2, typename T3, typename T4>
    void location(const T1& index, const T2& lat, const T3& lon, const T4& value) {
        Blynk.virtualWrite(mPin, index, lat, lon, value);
    }

};

#endif
