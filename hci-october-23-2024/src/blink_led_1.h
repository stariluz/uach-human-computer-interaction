#include <Arduino.h>
#include "pines_in_use.h"
#include "observer.h"
#include "bus_event.h"

class BlinkLedObserver : public Observer
{
public:
    BlinkLed1Observer(Subject &subject) : Observer(subject) {}

    void Update(const std::string &message_from_subject) override
    {
        Observer::Update(message_from_subject);
        this->blink_led();
    }

    void blink_led()
    {
        digitalWrite(LED_1_PIN, 1);
        delay(1000);
        digitalWrite(LED_1_PIN, 0);
    }
};


BlinkLedObserver *blink_led_observer;


// blink_led_observer=new BlinkLed1Observer(*(event_bus_1.subject));