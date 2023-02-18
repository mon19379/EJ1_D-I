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

uint8_t Cont = 0;
uint8_t A = 0;
uint8_t B = 0;
uint8_t C = 0;
uint8_t D = 0;


Button Bo1(Bot1);
Button Bo2(Bot2);
Button Bo3(Bot3);

Led L1(LD1);
Led L2(LD2);
Led L3(LD3);
Led L4(LD4);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Bo1.isPressed()){
    Cont++;
  }
  A = bitRead(Cont, 1);
  B = bitRead(Cont, 2);
  C = bitRead(Cont, 3);
  D = bitRead(Cont, 4);

  L1.on(1, Cont);
  L2.on(2, Cont);
  L3.on(3, Cont);
  L4.on(4, Cont);


 


}