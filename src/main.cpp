#include <Arduino.h>
#include <BNO055.hpp>

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  test();
  delay(400);
  digitalWrite(13, LOW);
  delay(200);
}