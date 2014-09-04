
task main()
{



}

void moveFor(float sec)
{
	startMotor(rightMotor,127);
	startMotor(leftMotor,-127);
	wait(sec);
	stopMotor(rightMotor);
	stopMotor(leftMotor);
}

void turnBy(float deg)
{
	float sec = deg/90;
	startMotor(rightMotor,-40);
	startMotor(leftMotor,-63);
	wait(sec);
	stopMotor(rightMotor);
	stopMotor(leftMotor);
}

void raiseArm()
{
	while(SensorValue(poteniometer) < 900)
	{
		startMotor(armMotor,30);
		waitInMilliseconds(100);
		stopMotor(armMotor);
	}
}

void lowerArm()
{
	while(SensorValue(potentiometer) > 100)
	{
		startMotor(armMotor,-30);
		waitInMilliseconds(100);
		stopMotor(armMotor);
	}
}
	
