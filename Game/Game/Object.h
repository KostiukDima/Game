#pragma once

class Object
{
private:


public:
	Object(){}

	virtual int GetPower() = 0;
	
	virtual int GetHealth() = 0;
	
	virtual void SetPower(int power) = 0;
	
	virtual void SetHealth(int health) = 0;
	
	virtual	void Print(int, int) = 0;
	 
	virtual int WhoAmI() = 0;

};

