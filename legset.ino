#include <Adafruit_PWMServoDriver.h>
#include "legseter.h"

void legready()
{
  pwm.setPWM(15, 0, 350); //本体側2
  pwm.setPWM(14, 0, 350); //3
  pwm.setPWM(13, 0, 350); //4
  pwm.setPWM(12, 0, 350); //1
  delay(100);
    
  pwm.setPWM(11, 0, 350); // 1
  pwm.setPWM(10, 0, 350);
  delay(100);
    
  pwm.setPWM( 9, 0, 350); // 2 8だけ逆 
  pwm.setPWM( 8, 0, 350);
  delay(100);
    
  pwm.setPWM( 7, 0, 350); // 3 7だけ逆
  pwm.setPWM( 6, 0, 350);
  delay(100);
    
  pwm.setPWM( 5, 0, 350); // 4
  pwm.setPWM( 4, 0, 350);
}

void legstay()
{
  pwm.setPWM(15, 0, 350); //本体側2
  pwm.setPWM(14, 0, 350); //3
  pwm.setPWM(13, 0, 350); //4
  pwm.setPWM(12, 0, 350); //1
  delay(100);
  pwm.setPWM(11, 0, 250); // 1
  pwm.setPWM(10, 0, 450);
  delay(100);
  pwm.setPWM( 9, 0, 250); // 2 8だけ逆 
  pwm.setPWM( 8, 0, 250);
  delay(100);
  pwm.setPWM( 7, 0, 450); // 3 7だけ逆
  pwm.setPWM( 6, 0, 450);
  delay(100);
  pwm.setPWM( 5, 0, 250); // 4
  pwm.setPWM( 4, 0, 450);
  delay(100);
}

void legmove1(uint16_t pulselen)
{
  pwm.setPWM(11, 0, 250); // 1
  pwm.setPWM(10, 0, 450);
  delay(100);
  pwm.setPWM(12, 0, pulselen); // 1
  delay(100);
  pwm.setPWM(11, 0, 350);
  pwm.setPWM(10, 0, 350);
  delay(100);
}

void legmove2(uint16_t pulselen)
{
  pwm.setPWM(9, 0, 250); // 2
  pwm.setPWM(8, 0, 250);
  delay(100);
  pwm.setPWM(15, 0, pulselen); // 2
  delay(100);
  pwm.setPWM(9, 0, 350);
  pwm.setPWM(8, 0, 350);
  delay(100);
  
}

void legmove3(uint16_t pulselen)
{
  pwm.setPWM( 7, 0, 450); // 3
  pwm.setPWM( 6, 0, 450);
  delay(100);
  pwm.setPWM(14, 0, pulselen); // 3
  delay(100);
  pwm.setPWM( 7, 0, 350);
  pwm.setPWM( 6, 0, 350);
  delay(100);
}

void legmove4(uint16_t pulselen)
{
  pwm.setPWM( 5, 0, 250); // 4
  pwm.setPWM( 4, 0, 450);
  delay(100);
  pwm.setPWM(13, 0, pulselen); // 4
  delay(100);
  pwm.setPWM( 5, 0, 350);
  pwm.setPWM( 4, 0, 350);
  delay(100);
}
