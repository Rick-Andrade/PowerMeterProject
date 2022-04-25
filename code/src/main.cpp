#include <Arduino.h>
#include "main.h"


void setup() {
  Serial.begin(115200);
  Conection logObject;

  logObject.SerialConection();

}

void loop() {
  // put your main code here, to run repeatedly:
}