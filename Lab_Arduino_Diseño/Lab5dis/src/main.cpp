//Universidad del Valle de Guatemala
//Rodrigo Garcia, 19085
//Francisco Montufar, 19379
#include <Arduino.h>

#include "BOT.h"
#include "LED.h"

#define Bot1 10
#define Bot2 11
#define Bot3 12

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
  
  c1.incremento();
  delay(500);
  


 


}