#pragma once
#include"Object.h"
#include"Line.h"

enum obj { dragon, hero, wolf, tree, deer, bush };

class Dragon : public Object
{
protected:
	
	int power;
	int health;


public:
	
	Dragon() : Object()
	{
		power = 10;
		health = 150;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return health;
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

	void Print(int x, int y);
	
	int WhoAmI()
	{
		return obj::dragon;
	}
};

class Hero : public Object
{
protected:

	int power;
	int health;


public:

	Hero() : Object()
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
		return health;
	}

	void SetPower(int power)
	{
		this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 100)
			this->health = health;
	}

	void Print(int x, int y);	

	int WhoAmI()
	{
		return obj::hero;
	}
};

class Wolf : public Object
{
protected:

	int power;
	int health;


public:

	Wolf() : Object()
	{
		power = 5;
		health = 60;
	}

	int GetPower()
	{
		return power;
	}

	int GetHealth()
	{
		return health;
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

	void Print(int x, int y);
	

	int WhoAmI()
	{
		return obj::wolf;
	}
};

class Tree : public Object
{
protected:
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
		return health;
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

	void Print(int x, int y);

	

	int WhoAmI()
	{
		return obj::tree;
	}
};

class Deer : public Object
{
protected:

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
		return health;
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

	void Print(int x, int y);
	

	int WhoAmI()
	{
		return obj::deer;
	}
};

class Bush: public Object
{
protected:

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
		return health;
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

	void Print(int x, int y);
	
	int WhoAmI()
	{
		return obj::bush;
	}
};
