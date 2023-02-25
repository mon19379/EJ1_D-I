/*Universidad del Valle de Guatemala
Diseño e Innovación 
Rodrigo Garcia, 19085
Francisco Montufar, 19379
*/
#include <Arduino.h>
#include "BOT.h"
#include "LED.h"

#define Boton1 10
#define Boton2 11
#define Boton3 12

int toggle_bot1 = 0;
int toggle_bot2 = 0;
int toggle_bot2 = 0;
int Selector = 1;

int Selector_Contador_1;
int Selector_Contador_2;

uint8_t Contador1;
uint8_t Contador2;

cont c1((uint8_t[]){6, 7, 8, 9}, Contador1);
cont c2((uint8_t[]){6, 7, 8, 9}, Contador2);

Button Bo1(Boton1);
Button Bo2(Boton2);
Button Bo3(Boton3);

void setup() {
  // put your setup code here, to run once:
  c1.init();
  c2.init();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Selector);
  if(Bo1.isPressed()){
    toggle_bot1 = 1;
  }

  else if(toggle_bot1 == 1 && !Bo1.isPressed()){
    toggle_bot1 = 0;
    if(Selector_Contador_1 == 1){
      c1.incremento();
      }
    if (Selector_Contador_2 == 1){
      c2.incremento();    
      } 
    }
  
  if(Bo2.isPressed()){
    toggle_bot2 = 1;
  }

  else if(toggle_bot2 == 1 && !Bo2.isPressed()){
    toggle_bot2 = 0;
    if(Selector_Contador_1 == 1){
      c1.decremento();
      }
    if (Selector_Contador_2 == 1){
      c2.decremento();    
      }
    }

  if(Bo3.isPressed()){
    toggle_bot2 = 1;
  }
  else if(toggle_bot2 == 1 && !Bo3.isPressed()){
    Selector++;
    toggle_bot2 = 0;
  }
  if(Selector == 1){
    Selector_Contador_1 = 1;
    Selector_Contador_2 = 0;
  }
  if(Selector == 2){
    Selector_Contador_2 = 1;
    Selector_Contador_1 = 0;
  }
  if(Selector == 3){
    Selector = 1;
  }
 }


  
  

  


 


