/**
 * medAzizLHB
 * SkorpTech
 */
#ifndef WidgetLCD_h
#define WidgetLCD_h

#include <Blynk/BlynkWidgetBase.h>

class WidgetLCD
    : public BlynkWidgetBase
{
public:
    WidgetLCD(uint8_t vPin) : BlynkWidgetBase(vPin) {}

    void clear() {
        Blynk.virtualWrite(mPin, "clr");
    }

    template<typename T>
    void print(int x, int y, const T& str) {
        char mem[BLYNK_MAX_SENDBYTES];
        BlynkParam cmd(mem, 0, sizeof(mem));
        cmd.add("p");
        cmd.add(x);
        cmd.add(y);
        cmd.add(str);
        Blynk.virtualWrite(mPin, cmd);
    }

};

#endif
