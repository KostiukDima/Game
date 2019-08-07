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
		power = 30;
		health = 300;
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

	void Print(int x, int y)
	{
		HWND hW = GetConsoleWindow();

		int xBegin = x;
		int yBegin = y;
		int yEnd;

		for (int i = 0; i < 19; i++)
		{
			switch (i)
			{
			case 0:
							
				yBegin = y + 14;
				yEnd = y + 26;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin+=2;
				
				break;
			case 1:


				yBegin = y + 18;
				yEnd = y + 28;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin+=2;
								
				break;
			case 2:

				yBegin = y + 20;
				yEnd = y + 30;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin+=2;
								
				break;
			case 3:

				yBegin = y + 22;
				yEnd = y + 32;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 4:

				yBegin = y + 22;
				yEnd = y + 34;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 5:

				yBegin = y + 20;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 6:

				yBegin = y + 18;
				yEnd = y + 38;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				
				yBegin = y + 41;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 7:

				yBegin = y + 16;
				yEnd = y + 36;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 8:

				yBegin = y + 16;
				yEnd = y + 34;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 9:

				yBegin = y + 14;
				yEnd = y + 36;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 10:

				yBegin = y + 2;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 11:

				yBegin = y;
				yEnd = y + 32;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y + 40;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 12:

				yBegin = y;
				yEnd = y + 1;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y+4;
				yEnd = y + 30;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 13:

				yBegin = y;
				yEnd = y + 28;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

			case 14:

				yBegin = y;
				yEnd = y + 14;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				
				yBegin = y + 18;
				yEnd = y + 20;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 15:

				yBegin = y;
				yEnd = y + 9;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				
				yBegin = y+12;
				yEnd = y + 14;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y + 18;
				yEnd = y + 22;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 16:

				yBegin = y;
				yEnd = y + 9;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y + 12;
				yEnd = y + 14;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;			

				break;

			case 17:

				yBegin = y;
				yEnd = y + 9;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y + 12;
				yEnd = y + 14;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 18:

				yBegin = y+2;
				yEnd = y + 9;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				xBegin += 2;

				break;

			default:
				break;
			}

		}




	}
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
		if (power <= 20)
			this->power = power;
	}

	void SetHealth(int health)
	{
		if (health <= 100)
			this->health = health;
	}

	void Print(int x, int y)
	{
		HWND hW = GetConsoleWindow();

		int xBegin = x;
		int yBegin = y;
		int yEnd;

		for (int i = 0; i < 9; i++)
		{
			switch (i)
			{
			case 0:

				yBegin = y + 12;
				yEnd = y + 16;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 1:


				yBegin = y + 2 ;
				yEnd = y + 8;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
				xBegin += 2;

				break;
			case 2:

				yBegin = y + 20;
				yEnd = y + 30;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 3:

				yBegin = y + 22;
				yEnd = y + 32;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 4:

				yBegin = y + 22;
				yEnd = y + 34;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 5:

				yBegin = y + 20;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 6:

				yBegin = y + 18;
				yEnd = y + 38;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

				yBegin = y + 41;
				yEnd = y + 42;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 7:

				yBegin = y + 16;
				yEnd = y + 36;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;

			case 8:

				yBegin = y + 16;
				yEnd = y + 34;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			case 9:

				yBegin = y + 14;
				yEnd = y + 36;
				Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
				xBegin += 2;

				break;
			default:
				break;
			}
		}
	}

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
		power = 15;
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

	void Print(int x, int y)
	{

	}

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

	void Print(int x, int y)
	{

	}

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

	void Print(int x, int y)
	{

	}

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

	void Print(int x, int y)
	{

	}

	int WhoAmI()
	{
		return obj::bush;
	}
};
