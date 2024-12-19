#include <Arduino.h>
#include "pines_in_use.h"
#include "bus_event.h"

struct button
{
    bool is_pressed()
    {
        if (digitalRead(BUTTON_1_PIN) == 1)
        {
            Serial.println("Onpress push_btn_1");
            event_bus_1.notify("push_btn_1");
            return true;
        }
        else
        {
            return false;
        }
    }
} button_1;