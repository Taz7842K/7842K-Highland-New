#include "main.h"
#include "MainConfig.h"

pros::Motor m_puncher(6);

void driverControlTask(void*)
{

  while(true)
  {

    if (HIDMain.get_digital(DIGITAL_R1))
    {
      m_puncher.move(-127);
    }

    else if (HIDMain.get_digital(DIGITAL_R2))
    {
      m_puncher.move(38);
    }
    else
    {
      m_puncher.move(0);
    }
  }
}
