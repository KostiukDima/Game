#pragma once
#include<iostream>
#include<conio.h>
#include"Map.h"
#include"Bag.h"
#include"Line.h"

using namespace std;

class Game : public Map
{
private:

	int XHero;
	int YHero;
	int XDragon;
	int YDragon;
	Bag bag;


public:
	Game()
		:Map()
	{
		bag = Bag();
		XHero = 0;
		YHero = 0;
		XDragon = 19;
		YDragon = 19;

	}

	void Ran()
	{
		system("mode con cols=70 lines=40");

		int move;

		while ((map[YHero][XHero]->GetHealth() > 0) && (map[YDragon][XDragon]->GetHealth() > 0) )
		{
			system("cls");
			Delete();
			Print(YHero,XHero);

			if ((YHero != 19) && (map[YHero + 1][XHero]!=nullptr)&&(map[YHero + 1][XHero]->WhoAmI() == obj::wolf))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero + 1][XHero]->GetPower());
			}
			else if ((YHero != 0) && (map[YHero - 1][XHero] != nullptr) && (map[YHero - 1][XHero]->WhoAmI() == obj::wolf))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero - 1][XHero]->GetPower());
			}
			else if ((XHero != 19) && (map[YHero][XHero + 1] != nullptr) && (map[YHero ][XHero+ 1]->WhoAmI() == obj::wolf))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero ][XHero+ 1]->GetPower());
			}
			else if ((XHero != 0) && (map[YHero][XHero - 1] != nullptr) && (map[YHero ][XHero - 1]->WhoAmI() == obj::wolf))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero][XHero - 1]->GetPower());
			}
			if ((YHero != 19)&&(map[YHero + 1][XHero] != nullptr) && (map[YHero + 1][XHero]->WhoAmI() == obj::dragon))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero + 1][XHero]->GetPower());
			}
			else if ((XHero != 19) && (map[YHero][XHero+1] != nullptr) && (map[YHero][XHero + 1]->WhoAmI() == obj::dragon))
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero][XHero + 1]->GetPower());
			}
			
			if (map[YHero][XHero]->GetHealth()<=0)
			{
				continue;
			}

			system("cls");
			Delete();
			Print(YHero, XHero);

						
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
			
			case int('e') :
				
				if (map[YHero][XHero]->GetHealth() + bag.GetFood()<=100)
				{
					map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() + bag.GetFood());
					bag.SetFood(0);
				}
				else
				{
					bag.SetFood(bag.GetFood()- (100 - map[YHero][XHero]->GetHealth()));
					map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() + (100- map[YHero][XHero]->GetHealth()));
				}
			break;

			default:
				break;
			}
		}

		if (map[YDragon][XDragon]->GetHealth() <= 0)
		{
			cout << "You Winer" << endl;
		}
		else if (map[YHero][XHero]->GetHealth() <= 0)
		{
			cout << "You Lose" << endl;
		}


	}
	
	void Print(int y, int x)
	{
		int xprint = 150;
		int yprint = 125;

		cout << "\t\t\t   SUPERMAN IN WOOD" << endl;
		cout << endl;
		cout << "   Health: " << map[YHero][XHero]->GetHealth()<<"\t";
		cout << "Power: " << map[YHero][XHero]->GetPower()<<"\t\t\t";
		cout << "Health Dragon:" << map[YDragon][XDragon]->GetHealth() << endl<<endl;
		cout << "\t\tGold: " << bag.GetGold()<<"\t     ";
		cout << "Food: " << bag.GetFood()<<"\t   ";
		cout << "Desk: " << bag.GetDesk()<<endl;

		for (int i = y-1; i < y+2; ++i)
		{
			for (int j = x-1; j < x+2; ++j)
			{
				if (j<0||j>19)
				{
					cout << "+ ";
				}
				else if (i < 0||i>19)
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
					map[i][j]->Print(xprint,yprint);
				}
				else if (map[i][j]->WhoAmI() == obj::dragon)
				{
					cout << "D ";
					map[i][j]->Print(xprint,yprint);
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
				xprint += 75;

			}
			cout << endl;
			xprint = 150;
			yprint += 75;
		}
	}


	void Delete()
	{
		for (int i = 150; i <375 ; i++)
		{
			HWND hW = GetConsoleWindow();
			Line(hW, i, 125, i, 350, RGB(0, 0, 0));
		}
	}

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
			
			if (map[YHero][XHero + 1]->GetHealth() <= 0)
			{
				if (map[YHero][XHero + 1]->WhoAmI() == obj::wolf)
					bag.SetGold(bag.GetGold() + 5);
				
				else if (map[YHero][XHero + 1]->WhoAmI() == obj::deer)
					bag.SetFood(bag.GetFood() + 5);
				
				else if (map[YHero][XHero + 1]->WhoAmI() == obj::tree)
					bag.SetDesk(bag.GetDesk() + 5);
				
				else if (map[YHero][XHero + 1]->WhoAmI() == obj::bush)
				{
					bag.SetFood(bag.GetFood() + 2);
					bag.SetDesk(bag.GetDesk() + 2);
				}
				
				if (map[YHero][XHero + 1]->WhoAmI() != obj::dragon)
				{
					delete map[YHero][XHero + 1];
					map[YHero][XHero + 1] = nullptr;
				}
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
				if (map[YHero][XHero - 1]->WhoAmI() == obj::wolf)
					bag.SetGold(bag.GetGold() + 5);

				else if (map[YHero][XHero - 1]->WhoAmI() == obj::deer)
					bag.SetFood(bag.GetFood() + 5);

				else if (map[YHero][XHero - 1]->WhoAmI() == obj::tree)
					bag.SetDesk(bag.GetDesk() + 5);

				else if (map[YHero][XHero - 1]->WhoAmI() == obj::bush)
				{
					bag.SetFood(bag.GetFood() + 2);
					bag.SetDesk(bag.GetDesk() + 2);
				}


				if (map[YHero][XHero - 1]->WhoAmI() != obj::dragon)
				{
					delete map[YHero][XHero - 1];
					map[YHero][XHero - 1] = nullptr;
				}
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

			if (map[YHero - 1][XHero]->GetHealth() <= 0)
			{
				if (map[YHero-1][XHero ]->WhoAmI() == obj::wolf)
					bag.SetGold(bag.GetGold() + 5);

				else if (map[YHero-1][XHero ]->WhoAmI() == obj::deer)
					bag.SetFood(bag.GetFood() + 5);

				else if (map[YHero-1][XHero]->WhoAmI() == obj::tree)
					bag.SetDesk(bag.GetDesk() + 5);

				else if (map[YHero-1][XHero ]->WhoAmI() == obj::bush)
				{
					bag.SetFood(bag.GetFood() + 2);
					bag.SetDesk(bag.GetDesk() + 2);
				}

				if (map[YHero-1][XHero ]->WhoAmI() != obj::dragon)
				{
					delete map[YHero - 1][XHero];
					map[YHero - 1][XHero] = nullptr;
				}
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

			if (map[YHero + 1][XHero]->GetHealth() <= 0)
			{
				if (map[YHero+ 1][XHero ]->WhoAmI() == obj::wolf)
					bag.SetGold(bag.GetGold() + 5);

				else if (map[YHero+ 1][XHero ]->WhoAmI() == obj::deer)
					bag.SetFood(bag.GetFood() + 5);

				else if (map[YHero+ 1][XHero ]->WhoAmI() == obj::tree)
					bag.SetDesk(bag.GetDesk() + 5);

				else if (map[YHero+ 1][XHero ]->WhoAmI() == obj::bush)
				{
					bag.SetFood(bag.GetFood() + 2);
					bag.SetDesk(bag.GetDesk() + 2);
				}
				if (map[YHero+1][XHero]->WhoAmI() != obj::dragon)
				{
					delete map[YHero + 1][XHero];
					map[YHero + 1][XHero] = nullptr;
				}
			}
		}

	}
	


};
