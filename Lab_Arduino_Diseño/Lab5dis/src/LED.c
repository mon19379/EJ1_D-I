#include "LED.h"

contador::cont(uint8_t pines[], uint8_t cuenta){
  
  }

void cont::init(){
  DDRC = B11110000;
  
}

void cont::incremento(){
  c++;
  PORTC = c;
  if(c == 60){
    c = 0;
  }
  
}

void cont::decremento(){
  c--;
  PORTC = c;
  
}