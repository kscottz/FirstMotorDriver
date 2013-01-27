#include "WPILib.h"
#include <iostream>
using namespace::std;


class BlinkyRobot : public IterativeRobot {
	Joystick joystick;
	Victor flywheel;
	
	static const int JOYSTICK_PORT = 1;
	static const int FLYWHEEL_PWM = 1;
public:
	BlinkyRobot() : joystick(JOYSTICK_PORT), flywheel(FLYWHEEL_PWM){
		
	}
	
	void RobotInit(){
		
	}
	
	void DisabledInit(){
		flywheel.Set(0);
	}
	
	void AutonInit(){
		
	}
	
	void TeleopInit(){
		
	}
	
	void DisabledPeriodic(){
		flywheel.Set(0);
	}
	
	void AutonPeriodic(){
		
	}
	
	void TeleopPeriodic(){
		float throttle = joystick.GetThrottle();
		throttle = (-throttle + 1)/2; 
		cout << "Throttle is at " << throttle << "%" << endl;
		if (joystick.GetTrigger()){
			flywheel.Set(throttle);
		} else {
			flywheel.Set(0);
		}
	}
	
	
};
