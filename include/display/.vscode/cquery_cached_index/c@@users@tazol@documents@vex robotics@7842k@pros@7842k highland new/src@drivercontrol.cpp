#include "main.h"
#include "MainConfig.h"

pros::Motor m_puncher(6);

void driverControls(void*)
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
