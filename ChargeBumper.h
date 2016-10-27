/* ChargeBumper library

MIT license
written by Weng Kai
*/
#ifndef _CHARGE_BUMPER_H_
#define _CHARGE_BUMPER_H_

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class ChargeBumper {
  public:
    ChargeBumper(uint8_t pinCharge, uint8_t pinRelease);
    void strike(uint8_t level);

 private:
    uint8_t _pinCharge;
    uint8_t _pinRelease;
};

#endif
