#include <Arduino.h>
#include <ArduinoJson.h>

// Allocate the JSON document
JsonDocument doc;

int ledPin=2;
int i=0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  digitalWrite(ledPin, HIGH);
  doc["counter"] = i++;
  // Add values in the document
  doc["sensor"] = "led";
  doc["isOn"] = true;
  doc["state"] = "ON";
  serializeJsonPretty(doc, Serial);
  delay(1000);

  digitalWrite(ledPin, LOW);
  doc["counter"] = i++;
  doc["sensor"] = "led";
  doc["state"] = false;
  doc["isOn"] = false;
  doc["state"] = "OFF";
  serializeJsonPretty(doc, Serial);
  delay(1000);
}
