#include "main.h"
#include "MainConfig.h"

pros::Controller HIDMain(pros::E_CONTROLLER_MASTER);

double Joystickch2;
double Joystickch4;

void setBasePower(int xPower, int yPower, int zPower)
{
  m_frontLeft.move(yPower-xPower-zPower);
	m_rearRight.move(yPower+xPower-zPower);
	m_frontLeft.move(yPower+xPower+zPower);
  m_rearLeft.move(yPower-xPower+zPower);
}

void baseControlTask(void*)
{

  while(true)
  {
    int Joystickch2 = HIDMain.get_analog(ANALOG_LEFT_X);
    int Joystickch4 = HIDMain.get_analog(ANALOG_LEFT_Y);
    int Joystickch3 = HIDMain.get_analog(ANALOG_RIGHT_X);//PLACEHOLDER!!

    setBasePower(Joystickch2,Joystickch4,Joystickch3);
  }
}

// remove error your problem
// telllletype
