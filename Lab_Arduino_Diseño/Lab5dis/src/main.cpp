//Universidad del Valle de Guatemala
//Rodrigo Garcia, 19085
//Francisco Montufar, 19379
#include <Arduino.h>

#include "BOT.h"
#include "LED.h"

#define Bot1 10
#define Bot2 11
#define Bot3 12

#define LD1 6
#define LD2 7
#define LD3 8
#define LD4 9

int C4bit = 0;
int LED_C1[4] = {LD1, LD2, LD3, LD4};
int LED_C2[4] = {LD1, LD2, LD3, LD4};

Button Bo1(Bot1);
Button Bo2(Bot2);
Button Bo3(Bot3);

Led L1(LD1);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Bo1.isPressed()){
    L1.on();
  }else{
    L1.off();
  }
}