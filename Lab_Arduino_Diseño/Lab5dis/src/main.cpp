//Universidad del Valle de Guatemala
//Rodrigo Garcia, 19085
//Francisco Montufar, 19379
#include <Arduino.h>

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

class Button {
  private:
    byte pin;
    byte state;
    byte lastReading;
    unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;

  public:
    Button(byte pin) {
      this->pin = pin;
      lastReading = LOW;
      init();
    }
    void init() {
      pinMode(pin, INPUT);
      update();
    }
    void update() {
      // De una vez implementar un anti-rebote en la clase 
      // para ya no tener que regresar a ver este código
      byte newReading = digitalRead(pin);
      if (newReading != lastReading) {
        lastDebounceTime = millis();
      }
      if (millis() - lastDebounceTime > debounceDelay) {
        state = newReading;
      }
      lastReading = newReading;
    }
    byte getState() {
      update();
      return state;
    }

    void setState(byte state){
      state = state;
    }

    bool isPressed() {
      return (getState() == HIGH);
    }
};

Button Bo1(Bot1);
Button Bo2(Bot2);
Button Bo3(Bot3);


void setup() {
  // put your setup code here, to run once:
    pinMode(LD1, OUTPUT);
    pinMode(LD2, OUTPUT);
    pinMode(LD3, OUTPUT);
    pinMode(LD4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}