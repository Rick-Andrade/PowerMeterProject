#include <Arduino.h>
#include "main.h"


void setup() {
  Serial.begin(115200);
  LOG logObject;

  logObject.init();

}

void loop() {
  // put your main code here, to run repeatedly:
}