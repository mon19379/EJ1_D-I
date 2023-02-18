#include <Arduino.h>

#define Bot1 10
#define Bot2 11
#define Bot3 12

#define LD1 6
#define LD2 7
#define LD3 8
#define LD4 9

void setup() {
  // put your setup code here, to run once:
    pinMode(LD1, OUTPUT);
    pinMode(LD2, OUTPUT);
    pinMode(LD3, OUTPUT);
    pinMode(LD4, OUTPUT);

    pinMode(Bot1, INPUT);
    pinMode(Bot2, INPUT);
    pinMode(Bot3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}