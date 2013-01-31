
#include "WPILib.h"
//#include <stdio.h>
#include <iostream>

using namespace std;

const int JOYSTICK_PORT = 1;

class ShooterRobot : public IterativeRobot {
	Joystick joystick;
	Victor flywheel;
	DriverStationLCD * driverStation;
	
public:
	ShooterRobot(void) : joystick(JOYSTICK_PORT), flywheel(3)
	{
		driverStation = DriverStationLCD::GetInstance();	
	}

	void RobotInit(void)
	{
		
	}
	void DisabledInit(void)
	{

	};
	
	void AutonomousInit(void)
	{
	};
	
    void TeleopInit(void)
	{
	};
    
    void TestInit(void)
	{	
	};
    

	void DisabledPeriodic(void)
	{	
	};
	
	void AutonomousPeriodic(void)
	{
		flywheel.Set(1.0);
		driverStation->Printf(DriverStationLCD::kUser_Line1,1, "HELLO WORLD");
		driverStation->UpdateLCD();

	};
    void TeleopPeriodic(void)
    {
		float throttle = joystick.GetThrottle();
		//we need to map [1, -1] joystick values to [0, 1] victor values
		throttle = (-throttle + 1)/2; 
		//then clamp them to multiples of .05 for repeatability
		throttle = 0.05f * ((int) (throttle * 20.0f));
		//max out at 75%, for safety and stuff
		if (throttle >= 0.75f)
			throttle = 0.75f;
		//fire only if the trigger is being held down
		if (joystick.GetTrigger()){
			driverStation->PrintfLine(DriverStationLCD::kUser_Line1, "TRIGGER ENGAGED");
			flywheel.Set(throttle);
		} else {
			driverStation->PrintfLine(DriverStationLCD::kUser_Line1, "PULL TRIGGER TO ENGAGE");
			flywheel.Set(0);
		}
		//print the throttle value as a percentage
		driverStation->PrintfLine(DriverStationLCD::kUser_Line2, "Throttle is at: %d%%", (int) throttle * 100);
		driverStation->UpdateLCD();

    };
	
};

START_ROBOT_CLASS(ShooterRobot);
