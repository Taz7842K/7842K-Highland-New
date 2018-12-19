#include "main.h"
#include "MainConfig.h"



void baseControlTask(void*);
void driverControlTask(void*);


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

}

//------------opControl------------------------------------------------
