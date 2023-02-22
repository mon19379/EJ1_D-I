/*Universidad del Valle de Guatemala
Diseño e Innovación 
Rodrigo Garcia, 19085
Francisco Montufar, 19379
*/

#include <Arduino.h>

#include "BOT.h"
#include "LED.h"

#define Bot1 10
#define Bot2 11
#define Bot3 12

int flag = 0;
int flag1 = 0;
int flag2 = 0;
int swtch = 1;

int FLGC1;
int FLGC2;

uint8_t Cont1;
uint8_t Cont2;

cont c1((uint8_t[]){6, 7, 8, 9}, Cont1);
cont c2((uint8_t[]){6, 7, 8, 9}, Cont2);

Button Bo1(Bot1);
Button Bo2(Bot2);
Button Bo3(Bot3);

void setup() {
  // put your setup code here, to run once:
  c1.init();
  c2.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Bo1.isPressed()){
    flag = 1;
  }

  else if(flag == 1 && !Bo1.isPressed()){
    flag = 0;
    if(FLGC1 == 1){
      c1.incremento();
      }
    if (FLGC2 == 1){
      c2.incremento();    
      } 
    }
  
  if(Bo2.isPressed()){
    flag1 = 1;
  }

  else if(flag1 == 1 && !Bo2.isPressed()){
    flag1 = 0;
    if(FLGC1 == 1){
      c1.decremento();
      }
    if (FLGC2 == 1){
      c2.decremento();    
      }
    }

  if(Bo3.isPressed()){
    flag2 = 1;
  }
  else if(flag2 == 1 && !Bo3.isPressed()){
    swtch++;
  }
  if(swtch == 1){
    FLGC1 = 1;
    FLGC2 = 0;
  }
  if(swtch == 2){
    FLGC2 = 1;
    FLGC1 = 0;
  }
  if(swtch == 3){
    swtch = 1;
  }
 }


  
  

  


 


