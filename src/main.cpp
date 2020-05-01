#include <Arduino.h>

#define OUTPUT_PIN 14

void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT_PIN,OUTPUT);
  digitalWrite(OUTPUT_PIN,LOW);
  delay(3000);
  digitalWrite(OUTPUT_PIN,HIGH);
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(OUTPUT_PIN,LOW);
  delay(100);
  digitalWrite(OUTPUT_PIN,HIGH);
  delay(100);
}