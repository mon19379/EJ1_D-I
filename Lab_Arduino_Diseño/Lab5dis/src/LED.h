#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class Led {
  
  private:
    uint8_t pins[8];
    uint8_t Count;
    uint8_t DigCount;
  public:
    Led(uint8_t pins[], uint8_t Count);
    void init();
    void begin();
    void increment();
};
#endif