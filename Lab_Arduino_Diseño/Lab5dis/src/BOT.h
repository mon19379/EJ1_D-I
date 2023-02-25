#ifndef MY_BUTTON_H
#define MY_BUTTON_H

#include <Arduino.h>

class Button {
  
//Funciones privadas
  private:
    byte pin;
    byte state;
    byte lastReading;
    unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    
//Funciones publicas
  public:
    Button(byte pin);

    void init();
    void update();

    byte getState();
    bool isPressed();
};

#endif