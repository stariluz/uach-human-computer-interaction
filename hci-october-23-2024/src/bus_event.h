#include <Arduino.h>
#include "blink_led_1.h"
#include "observer.h"


struct bus_event{
    Subject *subject=new Subject();
    void notify(String cmd){
        if(cmd=="push_btn_1") subject->CreateMessage("push_btn_1");
    }
}event_bus_1;