#include "LED.h"

Led::Led(byte pin) {
  this->pin = pin;
  init();
}

void Led::init() {
  pinMode(pin, OUTPUT);
  off();
}

void Led::on(int n, int c) {
  digitalWrite(pin, bitRead(c,n));
}

void Led::off() {
  digitalWrite(pin, LOW);
}