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

void ChargeBumper::strike(uint8_t level) {
	for ( int i=0; i<level; i++ ) {
    digitalWrite(_pinCharge, HIGH);
    delayMicroseconds(60);
    digitalWrite(_pinCharge, LOW);
    delayMicroseconds(20);
  }
  delayMicroseconds(30);
  digitalWrite(_pinRelease,HIGH);
  delayMicroseconds(200);
  digitalWrite(_pinRelease,LOW);
  delay(100);
}

