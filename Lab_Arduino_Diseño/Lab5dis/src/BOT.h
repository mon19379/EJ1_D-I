#ifndef MY_BUTTON_H
#define MY_BUTTON_H

#include <Arduino.h>

class Button {
    
  public:
    byte pin;
    int es;
    int deb;
    int boto;
    
    Button(byte pin);
    void init();
    void estado();
};

#endif