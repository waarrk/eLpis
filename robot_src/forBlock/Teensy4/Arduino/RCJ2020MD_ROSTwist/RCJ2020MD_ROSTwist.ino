#include <ros.h>
#include <geometry_msgs/Twist.h>
#include "pinconfig.h"
#include "p_tb67h.h"

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

void quadMotorDrive(int _m0, int _m1, int _m2, int _m3){
  motor[0].drive(-1*_m0);
  motor[1].drive(_m1);
  motor[2].drive(-1*_m2);
  motor[3].drive(_m3);
}

void moveDirection(float linear_x,float angular_z){
  if(angular_z == 0.0){
    if (linear_x > 0)/* forword */quadMotorDrive(50, 50, 50, 50);
    else if (linear_x == 0)/* stop */quadMotorDrive(0, 0, 0, 0);
    else if (linear_x < 0)/* back */quadMotorDrive(-50, -50, -50, -50);

  } else if (angular_z > 0.0) {
    if (linear_x > 0)/* left forward */quadMotorDrive(80, 40, 80, 40);
    else if (linear_x == 0)/* Turn left */quadMotorDrive(50, -50, 50, -50);
    else if (linear_x < 0)/* right back */quadMotorDrive(-40, -80, -40, -80);

  } else if (angular_z < 0.0) {
    if (linear_x > 0)/* right forward */quadMotorDrive(40, 80, 40, 80);
    else if (linear_x == 0)/* Turn right */quadMotorDrive(-80, 80, -80, 80);
    else if (linear_x < 0)/* left back */quadMotorDrive(-80, -40, -80, -40);

  }
  delay(0.1);
}

//メッセージコールバック時に呼ばれる
void messageCb( const geometry_msgs::Twist& twist){
  digitalWrite(TEENSY_LED, HIGH-digitalRead(TEENSY_LED));   // blink the led
  moveDirection(twist.linear.x, twist.angular.z);
}

//ROSのPubSub用インスタンスを作成
ros::NodeHandle  nh;
/*ROSサブスクライバ作成-型がstd_msgs::Emptyで名称がtoggle_ledのtopicを扱う
コールバック関数がmessageCbのサブスクライバsubを作ってる*/
ros::Subscriber<geometry_msgs::Twist> sub("cmd_vel", &messageCb );

void setup()
{ 
  pinMode(TEENSY_LED, OUTPUT);
  //nhインスタンスを初期化してnhのサブスクライバにsubを登録して開始
  nh.initNode();
  nh.subscribe(sub);
  //安全のためすべてのモータを一度停止
  for(int i=0;i<4;i++)motor[i].brake();
}

void loop()
{
  //パブリッシャからメッセージを受け取りコールバック関数を呼ぶ
  nh.spinOnce();
  delay(0.01);
}
