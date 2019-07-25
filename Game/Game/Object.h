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
	
	virtual	void Print() = 0;

	virtual int GetCount() = 0;
	
	virtual void SetCount(int  count) = 0;
	
};

