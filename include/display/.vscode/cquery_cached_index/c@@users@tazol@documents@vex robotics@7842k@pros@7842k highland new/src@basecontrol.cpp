#include "main.h"
#include "MainConfig.h"

pros::Controller ControllerMain(pros::E_CONTROLLER_MASTER);

pros::Motor m_frontLeft();
pros::Motor m_frontRight();
pros::Motor m_rearRight();
pros::Motor m_rearLeft();

double Joystickch2;
double Joystickch4;

void setBasePower(int xPower, int yPower, int zPower)
{
  frontLeft.move(yPower-xPower-zPower);
	rearRight.move(yPower+xPower-zPower);
	frontLeft.move(yPower+xPower+zPower);
  rearLeft.move(yPower-xPower+zPower);
}

void baseControlTask()
{

  while(true)
  {
    double Joystickch2 = HIDMain.get_analog(ANALOG_LEFT_X);
    double Joystickch4 = HIDMain.get_analog(ANALOG_LEFT_Y);
    double Joystickch3 = HIDMain.get_analog(ANALOG_RIGHT_X);//PLACEHOLDER!!

    setBasePower();




  }
}
