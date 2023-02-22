#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class cont {
  
  private:
    uint8_t x;
    uint8_t pin[4];
    uint8_t c = 0;
    uint8_t max;
    uint8_t min;
  public:
    cont( uint8_t pines [], uint8_t cuenta);
    void init();
    void incremento();
    void decremento();
    
    
};
#endif