#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class Led {
  
  private:
    byte pin;
    int n;
    int c;
  public:
    Led(byte pin);
    void init();
    void on(int n, int c);
    void off();
};
#endif