#include "main.h"
#include "MainConfig.h"
/*
std::shared_ptr<ChassisControllerIntegrated> mecbase =
ChassisControllerFactory::createPtr(
  frontLeft, frontRight, rearRight, rearLeft,          //Chassis Scales Updated
  AbstractMotor::gearset::green,
    {4_in, 9.5_in}
);
*/
void baseControlTask(void*);
void driverControlTask(void*);

pros::Controller JoystickMain(pros::E_CONTROLLER_MASTER);

pros::Motor m_puncher(6);
//--------------Initialize--------------------------------------------
void initialize()
{
//pros::Task BaseControl(baseControlTask, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "baseControlTask" );
//pros::Task DriverControl(driverControlTask, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "driverControlTask" );
}
//const int puncher(6);


// -------------Initialize---------------------------------------------

//--------------Disabled-----------------------------------------------
void disabled() {}
//--------------Disabled-----------------------------------------------

//--------------Competition Initialize---------------------------------
void competition_initialize() {}
//--------------Competition Initialize---------------------------------

//--------------Autonomous---------------------------------------------
void autonomous()
{

}
//--------------Autonomous---------------------------------------------

//-------------opControl-----------------------------------------------
void opcontrol()
{




    while(true)
    {

      if (JoystickMain.get_digital(DIGITAL_R1))
      {
      m_puncher.move(-127);
      }

      else if (JoystickMain.get_digital(DIGITAL_R2))
      {
      m_puncher.move(38);
      }
      else
      {
        m_puncher.move(0);
      }
    }
  }

//------------opControl------------------------------------------------
