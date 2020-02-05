#include <Streaming.h>
#include "pinconfig.h"
#include "p_tb67h.h"

//モーターの方向状態を保存している0停止1正2負
int motorDirection = 0;

/** create p_tb67h instance
 * @param MD first digital input pin setting
 * @param MD second digital input pin setting
 * @param MD PWM pin setting
 * @param MD error check pin setting
**/
p_tb67h motor[] = {
  /**front
   * B[1]-A[0]
   * D[3]-C[2]
   * back
  **/
  p_tb67h(INA1, INA2, PWMA, LOA1),
  p_tb67h(INB1, INB2, PWMB, LOB1),
  p_tb67h(INC1, INC2, PWMC, LOC1),
  p_tb67h(IND1, IND2, PWMD, LOD1)
};

void setup() {
  Serial.begin(115200);
  //安全のためすべてのモータを一度停止
  for(int i=0;i<4;i++)motor[i].brake();
}

void loop() {
  /**front
   * B-A
   * D-C
   * back
  **/
  Serial << "Hello Maxon Motor" << endl;
  int i;
  int motorSpeed = 50;
  if(motorDirection == 0){
    //停止to正
    for(i=0;i<4;i++){
      if(i==0||i==2)motor[i].drive(-1*motorSpeed);
      else motor[i].drive(motorSpeed);
    }
    motorDirection = 1;
  }else if(motorDirection == 1){
    //正to負
    for(i=0;i<4;i++){
      if(i==1||i==3)motor[i].drive(-1*motorSpeed);
      else motor[i].drive(motorSpeed);
    }
    motorDirection = 2;
  }else if(motorDirection == 2){
    //負to停止
    for(i=0;i<4;i++)motor[i].drive(0);
    motorDirection = 0;
  }
  delay(1000);
}
