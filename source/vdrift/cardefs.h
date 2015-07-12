#pragma once

enum WHEEL_POSITION
{
	FRONT_LEFT,	FRONT_RIGHT,
	REAR_LEFT,	REAR_RIGHT,
	REAR2_LEFT, REAR2_RIGHT
};
const int MAX_WHEELS = 6;

enum VehicleType
{
	V_Car, V_Spaceship, V_Sphere
};

namespace SURFACE  {
enum CARSURFACETYPE
{
	NONE, ASPHALT, GRASS, GRAVEL, CONCRETE, SAND, COBBLES
};  }

namespace CARINPUT  {
enum CARINPUT
{
	//actual car inputs that the car uses
	THROTTLE, 	BRAKE,  BOOST, FLIP,
  	HANDBRAKE, 	CLUTCH, //-
  	STEER_LEFT,	STEER_RIGHT,
 	SHIFT_UP, 	SHIFT_DOWN,
 	PREV_CAM, NEXT_CAM,
 	LAST_CHK, REWIND,
 	//ABS_TOGGLE, TCS_TOGGLE, START_ENGINE,
	ALL
};  }

enum EPerfTest {PT_StartWait, PT_Accel, PT_Brake};

const int Ncrashsounds = 12, Nwatersounds = 3;

#ifdef _WIN32
static bool isnan(float number)  {  return (number != number);  }
static bool isnan(double number) {  return (number != number);  }
#endif

const static char sCfgWh[MAX_WHEELS][4] = {"FL","FR","RL","RR","RL2","RR2"};  // .car config wheel names

const int PAR_BOOST = 2, PAR_THRUST = 4;  // max particles for boost and spc thrusters
