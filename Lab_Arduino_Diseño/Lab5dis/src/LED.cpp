#include "LED.h"

Led::Led(byte pin) {
  this->pin = pin;
  init();
}

void Led::init() {
  pinMode(pin, OUTPUT);
  off();
}

void Led::on(uint8_t n) {
  digitalWrite(pin, n);
}

void Led::off() {
  digitalWrite(pin, LOW);
}