#include <Arduino.h>
#include "p_tb67h.h"

p_tb67h::p_tb67h(uint8_t in1, uint8_t in2, uint8_t pwm, uint8_t lo1)
{
  _in1 = in1;
  _in2 = in2;
  _pwm = pwm;
  _lo1 = lo1;
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(pwm,OUTPUT);
  pinMode(lo1,INPUT);
}

void p_tb67h::drive(int power)
{
  /** power limitter
   * @explain limit power between -255 to 255
  **/
  if(power>255)power=255;else if(power<-255)power=-255;
  
  /** drive motor
   *  @explain if power is more than 0,motor will drive true. if else,it is drive false direction.
  **/
  if(power>0){
    digitalWrite(_in1,LOW);
    digitalWrite(_in2,LOW);
    digitalWrite(_in1,HIGH);
    digitalWrite(_in2,LOW);
    analogWrite(_pwm,power);
  }else if(power==0){
    digitalWrite(_in1,LOW);
    digitalWrite(_in2,LOW);
    analogWrite(_pwm,0);
  }else{
    digitalWrite(_in1,LOW);
    digitalWrite(_in2,LOW);
    digitalWrite(_in1,LOW);
    digitalWrite(_in2,HIGH);
    analogWrite(_pwm,-1*power);
  }
}

void p_tb67h::brake()
{
  digitalWrite(_in1,LOW);
  digitalWrite(_in2,LOW);
  analogWrite(_pwm,0);
}
