// Example testing sketch for booster driver
// Written by Weng Kai, public domain

#include "ChargeBumper.h"

const int pinCharger = 2;
const int pinRelease = 4;

ChargeBumper booster(pinCharger, pinRelease);

void setup() {
  
}

void loop() {
  delay(2000);

  for ( int level=1; level<10; level++ ) {
    booster.strike(level);
    delay(2000);
  }
  delay(5000);
}
