#include "LED.h"

contador::cont(uint8_t pines[], uint8_t cuenta){
  
  }

void cont::init(){
  DDRC = B11110000;
}

void cont::incremento(){
  puerto_var++;
  PORTC = puerto_var;
  if(puerto_var == 60){
    puerto_var = 0;
  }
  
}

void cont::decremento(){
  puerto_var--;
  PORTC = puerto_var;
  
}