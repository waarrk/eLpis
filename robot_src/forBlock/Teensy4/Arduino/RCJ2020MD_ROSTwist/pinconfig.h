#ifndef PINCONFIG_H_
#define PINCONFIG_H_

#include <Arduino.h>

/**maxon motor drive**/
#define INA1 0
#define INA2 1
#define PWMA 2
#define INB1 3
#define INB2 4
#define PWMB 5
#define INC1 6
#define INC2 7
#define PWMC 8
#define IND1 9
#define IND2 10
#define PWMD 11

/**teensy on board**/
#define TEENSY_LED 13

/**maxon motor error check**/
#define LOA1 A0 //14
#define LOB1 A1 //15
#define LOC1 A2 //16
#define LOD1 A3 //17


/**servo motor error check**/
#define SERVO_PWM 18

#endif
