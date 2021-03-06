#include "WPILib.h"

class ShooterPrototype : public IterativeRobot {
	Joystick joystick;
	Victor flywheel;
	DriverStationLCD* ds;
	
	static const int JOYSTICK_PORT = 1;
	static const int FLYWHEEL_PWM = 1;
	static const float MAX_THROTTLE = .8f;
public:
	ShooterPrototype() : joystick(JOYSTICK_PORT), flywheel(FLYWHEEL_PWM) {
		ds = DriverStationLCD::GetInstance();
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
		//map [1, -1] throttle values to [0, 1] victor speeds
		throttle = (-throttle + 1)/2; 
		//clamp to multiples of 0.05
		throttle = 0.05f * (int)(throttle * 20);
		if (throttle >= MAX_THROTTLE){
			throttle = MAX_THROTTLE;
			ds->PrintfLine(DriverStationLCD::kUser_Line4, "THROTTLE LIMIT REACHED");
		} else {
			ds->PrintfLine(DriverStationLCD::kUser_Line4, "");
		}
		ds->PrintfLine(DriverStationLCD::kUser_Line2, "Throttle at: %d%%", (int) (throttle * 100));
		if (joystick.GetTrigger()){
			flywheel.Set(throttle);
			ds->PrintfLine(DriverStationLCD::kUser_Line1, "TRIGGER ENGAGED");
		} else {
			flywheel.Set(0.0f);
			ds->PrintfLine(DriverStationLCD::kUser_Line1, "TRIGGER DISENGAGED");
		}
		ds->PrintfLine(DriverStationLCD::kUser_Line3, "Victor is at: %d", (int)(flywheel.Get() * 100));
		ds->UpdateLCD();
	}
	
	
};

START_ROBOT_CLASS(ShooterPrototype)
