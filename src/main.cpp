#include <Arduino.h>
#include "sensor.hpp"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(get_sensor());
  delay(1000);
}