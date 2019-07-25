#pragma once
#include"Object.h"

class Dragon : public Object
{
private:
	
	int power;
	int health;


public:
	
	Dragon() : Object()
	{
		power = 30;
		health = 300;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 30)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 300)
			this->health = health;
	}

	void Print()
	{

	}
};

class Deadpool : public Object
{
private:

	int power;
	int health;


public:

	Deadpool() : Object()
	{
		power = 20;
		health = 100;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 20)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 100)
			this->health = health;
	}

	void Print()
	{

	}
};

class Wolf : public Object
{
private:

	int power;
	int health;


public:

	Wolf() : Object()
	{
		power = 15;
		health = 60;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 15)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 60)
			this->health = health;
	}

	void Print()
	{

	}
};

class Tree : public Object
{
private:

	int power;
	int health;


public:

	Tree() : Object()
	{
		power = 0;
		health = 40;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 0)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 40)
			this->health = health;
	}

	void Print()
	{

	}
};

class Deer : public Object
{
private:

	int power;
	int health;


public:

	Deer() : Object()
	{
		power = 0;
		health = 60;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 0)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 60)
			this->health = health;
	}

	void Print()
	{

	}
};

class Bush: public Object
{
private:

	int power;
	int health;


public:

	Bush() : Object()
	{
		power = 0;
		health = 40;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return power;
	}

	void SetPower(int power)
	{
		if (power <= 0)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 40)
			this->health = health;
	}

	void Print()
	{

	}
};
