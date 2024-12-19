#include <Arduino.h>
#include "pines_in_use.h"
#include "push_btn_1.h"
#include "blink_led_1.h"

void setup()
{
  Serial.begin(115200);
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(BUTTON_1_PIN, INPUT);
}

void loop()
{
  button_1.is_pressed();
  delay(50);
}
