#pragma once
#include<iostream>
#include<conio.h>
#include"Map.h"

using namespace std;

class Game : public Map
{
private:

	int XHero;
	int YHero;
	int XDragon;
	int YDragon;


public:
	Game()
		:Map()
	{
		XHero = 0;
		YHero = 0;
		XDragon = 19;
		YDragon = 19;

	}

	void Ran()
	{
		system("mode con cols=80 lines=30");

		int move;

		while ((map[YHero][XHero]->GetHealth() > 0) && (map[YDragon][XDragon]->GetHealth() > 0) )
		{
			Print();
			move = _getch();
			switch (move )
			{
			case int('w') :
				MoveUp();
					break;
			
			case int('s') :
				MoveDown();
					break;
					
			case int('d') :
				MoveRight();
					break;
			
			case int('a') :
				MoveLeft();
					break;

			default:
				break;
			}





			system("cls");

		}

	}
	
	/*void Print(int y, int x)
	{
		for (int i = y-1; i < y+2; ++i)
		{
			for (int j = x-1; j < x+2; ++j)
			{
				if (j<0)
				{
					cout << "+ ";
				}
				else if (i < 0)
				{
					cout << "- ";
				}
				else if (map[i][j] == nullptr)
				{
					cout << "  ";
				}
				else if (map[i][j]->WhoAmI() == obj::hero)
				{
					cout << "H ";
				}
				else if (map[i][j]->WhoAmI() == obj::dragon)
				{
					cout << "D ";
				}
				else if (map[i][j]->WhoAmI() == obj::wolf)
				{
					cout << "W ";
				}
				else if (map[i][j]->WhoAmI() == obj::tree)
				{
					cout << "T ";
				}
				else if (map[i][j]->WhoAmI() == obj::deer)
				{
					cout << "d ";
				}
				else if (map[i][j]->WhoAmI() == obj::bush)
				{
					cout << "B ";
				}
			}
			cout << endl;
		}
	}*/

	void MoveRight()
	{
		if (XHero == 19)
			return;

		if (map[YHero][XHero+1]==nullptr)
		{
			map[YHero][XHero+1] = map[YHero][XHero];
			map[YHero][XHero] = nullptr;
			XHero++;
		}
		else
		{
			map[YHero][XHero + 1]->SetHealth(map[YHero][XHero + 1]->GetHealth() - map[YHero][XHero]->GetPower());
			
			if (map[YHero][XHero + 1]->GetHealth()<=0)
			{
				delete map[YHero][XHero + 1];
				map[YHero][XHero + 1] = nullptr;
			}
		}

	}
	void MoveLeft()
	{
		if (XHero == 0)
			return;

		if (map[YHero][XHero-1] == nullptr)
		{
			map[YHero][XHero-1] = map[YHero][XHero];
			map[YHero][XHero] = nullptr;
			XHero--;
		}
		else
		{
			map[YHero][XHero - 1]->SetHealth(map[YHero][XHero - 1]->GetHealth() - map[YHero][XHero]->GetPower());

			if (map[YHero][XHero - 1]->GetHealth() <= 0)
			{
				delete map[YHero][XHero - 1];
				map[YHero][XHero - 1] = nullptr;
			}
		}

	}
	void MoveUp()
	{
		if (YHero == 0)
			return;

		if (map[YHero-1][XHero] == nullptr)
		{
			map[YHero-1][XHero] = map[YHero][XHero];
			map[YHero][XHero] = nullptr;
			YHero--;
		}
		else
		{
			map[YHero-1][XHero]->SetHealth(map[YHero-1][XHero]->GetHealth() - map[YHero][XHero]->GetPower());

			if (map[YHero-1][XHero ]->GetHealth() <= 0)
			{
				delete map[YHero-1][XHero];
				map[YHero-1][XHero] = nullptr;
			}
		}
	}
	void MoveDown()
	{
		if (YHero == 19)
			return;

		if (map[YHero+1][XHero] == nullptr)
		{
			map[YHero+1][XHero] = map[YHero][XHero];
			map[YHero][XHero] = nullptr;
			YHero++;
		}
		else
		{
			map[YHero+1][XHero]->SetHealth(map[YHero+1][XHero]->GetHealth() - map[YHero][XHero]->GetPower());

			if (map[YHero+1][XHero]->GetHealth() <= 0)
			{
				delete map[YHero+1][XHero];
				map[YHero+1][XHero] = nullptr;
			}
		}

	}
	


};
