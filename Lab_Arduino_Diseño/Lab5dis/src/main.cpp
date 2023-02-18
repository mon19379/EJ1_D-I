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

uint8_t Cont1 = 0;
uint8_t Cont2 = 0;
uint8_t ContF = 0;
int SEL = 1;

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
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Bo1.getState();
  //Bo2.getState();
  
  if(Bo1.isPressed()){
    ContF++;
  }
  if(Bo2.isPressed()){
    ContF--;
  }

  A = bitRead(ContF, 1);
  B = bitRead(ContF, 2);
  C = bitRead(ContF, 3);
  D = bitRead(ContF, 4);

  L1.on(A);
  L2.on(B);
  L3.on(C);
  L4.on(D);
  Serial.println(ContF);

  if(Bo3.isPressed()){
    SEL++;
  }

 


}