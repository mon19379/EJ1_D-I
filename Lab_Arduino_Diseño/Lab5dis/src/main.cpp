//Universidad del Valle de Guatemala
//Rodrigo Garcia, 19085
//Francisco Montufar, 19379
#include <Arduino.h>

#include "BOT.h"
#include "LED.h"

#define Bot1 10
#define Bot2 11
#define Bot3 12

int flag = 0;
int flag1 = 0;

cont c1((uint8_t[]){6, 7, 8, 9}, 4);


Button Bo1(Bot1);
Button Bo2(Bot2);
Button Bo3(Bot3);



void setup() {
  // put your setup code here, to run once:
  c1.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Bo1.isPressed()){
    flag = 1;
  }

  else if(flag == 1 && !Bo1.isPressed()){
    flag = 0;
    c1.incremento();
    }
  

  if(Bo2.isPressed()){
    flag1 = 1;
  }

  else if(flag1 == 1 && !Bo2.isPressed()){
    flag1 = 0;
    c1.decremento();
    }
 }
  
  

  


 


