#ifndef POLOLU_TB67H420FTG_DRIVE_H_
#define POLOLU_TB67H420FTG_DRIVE_H_

#include <Arduino.h>

/** p_tb67h md control class
  * Example :
  * @simple code example
  #include "pinconfig.h"
  #include "p_tb67h.h"

  p_tb67h motorA = p_tb67h(INA1, INA2, PWMA, LOA1);

  void setup() {
    motorA.brake();
  }
  void loop() {
    motorA.drive(255);
    delay(100);
  }
  * @endcode
**/

class p_tb67h{
public:
    /** Create p_tb67h instance
     * @param MD first digital input pin setting
     * @param MD second digital input pin setting
     * @param MD PWM pin setting
     * @param MD error check pin setting
    **/
    p_tb67h(uint8_t in1, uint8_t in2, uint8_t pwm, uint8_t lo1);
    
    /** drive motor
     * @param speed of motor -255 to 255
    **/
    void drive(int power);
    
    /** stop motor
     * @param void
    **/
    void brake();

private:
    uint8_t _in1;
    uint8_t _in2;
    uint8_t _pwm;
    bool _lo1;
};

#endif
