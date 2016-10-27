/* DChargeBumper library

MIT license
written by Weng Kai
*/

#include "ChargeBumper.h"

#define MIN_INTERVAL 2000

ChargeBumper::ChargeBumper(uint8_t pinCharge, uint8_t pinRelease) {
  _pinCharge = pinCharge;
  _pinRelease = pinRelease;
  pinMode(_pinCharge, OUTPUT);
  pinMode(_pinRelease, OUTPUT);
  digitalWrite(_pinCharge, LOW);
digitalWrite(_pinRelease, LOW);
}

void DHChargeBumperT::strike(uint8_t level) {
  
}

