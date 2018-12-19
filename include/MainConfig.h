#include "main.h"

extern std::shared_ptr<ChassisControllerFactory> mecBase;

extern pros::Controller HIDMain;

extern void baseControlTask(void*);
extern void driverControlTask(void*);


extern const int puncher;

extern const int e_frontLeft;
extern const int e_frontRight;
extern const int e_rearRight;
extern const int e_rearLeft;

extern pros::Motor m_frontLeft;
extern pros::Motor m_frontRight;
extern pros::Motor m_rearRight;
extern pros::Motor m_rearLeft;
