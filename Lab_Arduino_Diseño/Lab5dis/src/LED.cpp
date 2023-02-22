#include "LED.h"

cont::cont(uint8_t pines[], uint8_t cuenta){
  if (cuenta <= 4){
    x = cuenta;
  }

  else{
    x = 4;
  }
}
void cont::init(){
  DDRD = B00111100;
  
}

void cont::incremento(){
  c++;
  PORTD = c;
  if(c == 60){
    c = 0;
  }
  
}

void cont::decremento(){
  c--;
  PORTD = c;
  
}