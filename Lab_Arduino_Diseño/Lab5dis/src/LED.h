#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class Led {
  
  private:
    byte pin;
    uint8_t n;
  public:
    Led(byte pin);
    void init();
    void on(uint8_t n);
    void off();
};
#endif