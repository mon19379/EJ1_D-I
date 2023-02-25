#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class contador {
  
  private:
    uint8_t pin;
    uint8_t puerto_var = 0;
  public:
    cont( uint8_t pines [], uint8_t cuenta);
    void init();
    void incremento();
    void decremento();
    
    
};
#endif