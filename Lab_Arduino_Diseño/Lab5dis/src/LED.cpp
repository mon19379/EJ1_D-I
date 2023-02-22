#include "LED.h"

cont::cont(uint8_t pines[], uint8_t cuenta){
  if (cuenta <= 4){
    x = cuenta;
  }

  else{
    x = 4;
  }

  for(int i = 0; i < x; i++){
    pin[i] = pines[i];
  }

  
}

void cont::init(){
  for(int i = 0; i < x; i++){
    pinMode(pin[i], OUTPUT);
  }
}

void cont::incremento(){

  if(x == 4){
    max = 15;

  }

  else{
    max = (1 << x) - 1 ;
  }

  uint8_t m = 1;
  uint8_t valor;

 for(int i = 0; i < x ; i++){
    valor = (c & m) ? 1:0;
    digitalWrite(pin[i], valor);
    m = m << 1;
 }

  if(c >= max){
    c = 0;
  }

  else{
    c++;
  }
}

void cont::decremento(){
   if(x == 4){
    min = 0;

  }

  else{
    min = (1 << x) -1 ;
  }

  uint8_t m = 1;
  uint8_t valor;

 for(int i = 0; i < x ; i++){
    valor = (c & m) ? 1:0;
    digitalWrite(pin[i], valor);
    m = m << 1;
 }

  if(c < min){
    c = 0;
  }

  else{
    c--;
  }
}