#include "BOT.h"

Button::Button(byte pin) {
  this->pin = pin;

  init();
}

void Button::init() {
  pinMode(pin, INPUT);
}

void Button::estado() {
    es = digitalRead(pin);
      if(es==1){
        boto = 1;
      }

      if(es==0 && boto ==1){
        deb=!deb;
        boto = 0;
      }
      return deb;
    }


