#include "Game.h"

void Game::Ran()
{
	system("mode con cols=70 lines=40");

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	int move;

	while ((map[YHero][XHero]->GetHealth() > 0) && (map[YDragon][XDragon]->GetHealth() > 0))
	{
		system("cls");
		Delete();
		Print(YHero, XHero);

		if ((YHero != 19) && (map[YHero + 1][XHero] != nullptr) && (map[YHero + 1][XHero]->WhoAmI() == obj::wolf))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero + 1][XHero]->GetPower());
		}
		else if ((YHero != 0) && (map[YHero - 1][XHero] != nullptr) && (map[YHero - 1][XHero]->WhoAmI() == obj::wolf))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero - 1][XHero]->GetPower());
		}
		else if ((XHero != 19) && (map[YHero][XHero + 1] != nullptr) && (map[YHero][XHero + 1]->WhoAmI() == obj::wolf))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero][XHero + 1]->GetPower());
		}
		else if ((XHero != 0) && (map[YHero][XHero - 1] != nullptr) && (map[YHero][XHero - 1]->WhoAmI() == obj::wolf))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero][XHero - 1]->GetPower());
		}
		if ((YHero != 19) && (map[YHero + 1][XHero] != nullptr) && (map[YHero + 1][XHero]->WhoAmI() == obj::dragon))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero + 1][XHero]->GetPower());
		}
		else if ((XHero != 19) && (map[YHero][XHero + 1] != nullptr) && (map[YHero][XHero + 1]->WhoAmI() == obj::dragon))
		{
			map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() - map[YHero][XHero + 1]->GetPower());
		}

		if (map[YHero][XHero]->GetHealth() <= 0)
		{
			continue;
		}

		system("cls");
		Delete();
		Print(YHero, XHero);


		move = _getch();
		switch (move)
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

			if (map[YHero][XHero]->GetHealth() + bag.GetFood() <= 100)
			{
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() + bag.GetFood());
				bag.SetFood(0);
			}
			else
			{
				bag.SetFood(bag.GetFood() - (100 - map[YHero][XHero]->GetHealth()));
				map[YHero][XHero]->SetHealth(map[YHero][XHero]->GetHealth() + (100 - map[YHero][XHero]->GetHealth()));
			}
			break;

		case int('r') :

			if (bag.GetGold() >= 50, bag.GetDesk() >= 50)
			{
			 map[YHero][XHero]->SetPower(map[YHero][XHero]->GetPower() + 10);
			 bag.SetGold(bag.GetGold() - 50);
			 bag.SetDesk(bag.GetDesk() - 50);
			}
			else
			{

			 SetConsoleTextAttribute(console, 12);
			 cout << "                       Not enough resources" << endl;
			 SetConsoleTextAttribute(console, 7);
			 Sleep(500);
			}
			break;

		default:
			break;
		}
	}

	if (map[YDragon][XDragon]->GetHealth() <= 0)
	{
		SetConsoleTextAttribute(console, 12);
		cout << "You Winer" << endl;
		SetConsoleTextAttribute(console, 7);
		cin.get();
	}
	else if (map[YHero][XHero]->GetHealth() <= 0)
	{
		SetConsoleTextAttribute(console, 12);
		cout << "                                  You Lose" << endl;
		SetConsoleTextAttribute(console, 7);
		cin.get();

	}


}

void Game::Print(int y, int x)
{
	int xprint = 150;
	int yprint = 125;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(console, 1);
	cout << "\t\t\t   SUPERMAN IN WOOD" << endl;
	cout << endl;
	SetConsoleTextAttribute(console, 12);
	cout << "   Health: " << map[YHero][XHero]->GetHealth() << "\t";
	cout << "Power: " << map[YHero][XHero]->GetPower() << "\t\t\t";
	cout << "Health Dragon:" << map[YDragon][XDragon]->GetHealth() << endl << endl;
	SetConsoleTextAttribute(console, 14);
	cout << "\t\tGold: " << bag.GetGold() << "\t     ";
	cout << "Food: " << bag.GetFood() << "\t   ";
	cout << "Desk: " << bag.GetDesk() << endl << endl;
	SetConsoleTextAttribute(console, 2);
	cout << "      W - Move Up     D - Move Right" << endl;
	cout << "      S - Move Down   E - Eat" << endl;
	cout << "      A - Move Left   R - Buy Weapons (power+10)(50 gold, 50 desk)" << endl;

	SetConsoleTextAttribute(console, 7);



	for (int i = y - 1; i < y + 2; ++i)
	{
		for (int j = x - 1; j < x + 2; ++j)
		{
			if (j < 0 || j>19)
			{
				HWND hW = GetConsoleWindow();

				if (j < 0 && i != -1 && i != 20)
				{
					Line(hW, xprint + 70, yprint - 5, xprint + 70, yprint + 75, RGB(250, 0, 0));
					Line(hW, xprint + 70, yprint - 5, xprint + 70, yprint + 75, RGB(250, 0, 0));
					Line(hW, xprint + 70, yprint - 5, xprint + 70, yprint + 75, RGB(250, 0, 0));
				}
				if (j > 19 && i != -1 && i != 20)
				{
					Line(hW, xprint, yprint - 5, xprint, yprint + 75, RGB(250, 0, 0));
					Line(hW, xprint, yprint - 5, xprint, yprint + 75, RGB(250, 0, 0));
					Line(hW, xprint, yprint - 5, xprint, yprint + 75, RGB(250, 0, 0));
				}


			}
			else if (i < 0 || i>19)
			{
				HWND hW = GetConsoleWindow();

				if (i < 0)
				{
					Line(hW, xprint - 5, yprint + 70, xprint + 75, yprint + 70, RGB(250, 0, 0));
					Line(hW, xprint - 5, yprint + 70, xprint + 75, yprint + 70, RGB(250, 0, 0));
					Line(hW, xprint - 5, yprint + 70, xprint + 75, yprint + 70, RGB(250, 0, 0));
				}
				if (i > 19)
				{
					Line(hW, xprint - 5, yprint, xprint + 75, yprint, RGB(250, 0, 0));
					Line(hW, xprint - 5, yprint, xprint + 75, yprint, RGB(250, 0, 0));
					Line(hW, xprint - 5, yprint, xprint + 75, yprint, RGB(250, 0, 0));
				}



			}
			else if (map[i][j] == nullptr)
			{
				
			}
			else if (map[i][j]->WhoAmI() == obj::hero)
			{
				
				map[i][j]->Print(xprint, yprint);
			}
			else if (map[i][j]->WhoAmI() == obj::dragon)
			{
				
				map[i][j]->Print(xprint, yprint);
			}
			else if (map[i][j]->WhoAmI() == obj::wolf)
			{
				map[i][j]->Print(xprint, yprint);
				
			}
			else if (map[i][j]->WhoAmI() == obj::tree)
			{
				map[i][j]->Print(xprint, yprint);
				
			}
			else if (map[i][j]->WhoAmI() == obj::deer)
			{
				map[i][j]->Print(xprint, yprint);
				
			}
			else if (map[i][j]->WhoAmI() == obj::bush)
			{
				map[i][j]->Print(xprint, yprint);
				
			}
			xprint += 75;

		}
		cout << endl;
		xprint = 150;
		yprint += 75;
	}
}

void Game::Delete()
{
	for (int i = 50; i < 450; i++)
	{
		HWND hW = GetConsoleWindow();
		Line(hW, i, 50, i, 450, RGB(0, 0, 0));
	}
}

void Game::MoveRight()
{
	if (XHero == 19)
		return;

	if (map[YHero][XHero + 1] == nullptr)
	{
		map[YHero][XHero + 1] = map[YHero][XHero];
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

void Game::MoveLeft()
{
	if (XHero == 0)
		return;

	if (map[YHero][XHero - 1] == nullptr)
	{
		map[YHero][XHero - 1] = map[YHero][XHero];
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

void Game::MoveUp()
{
	if (YHero == 0)
		return;

	if (map[YHero - 1][XHero] == nullptr)
	{
		map[YHero - 1][XHero] = map[YHero][XHero];
		map[YHero][XHero] = nullptr;
		YHero--;
	}
	else
	{
		map[YHero - 1][XHero]->SetHealth(map[YHero - 1][XHero]->GetHealth() - map[YHero][XHero]->GetPower());

		if (map[YHero - 1][XHero]->GetHealth() <= 0)
		{
			if (map[YHero - 1][XHero]->WhoAmI() == obj::wolf)
				bag.SetGold(bag.GetGold() + 5);

			else if (map[YHero - 1][XHero]->WhoAmI() == obj::deer)
				bag.SetFood(bag.GetFood() + 5);

			else if (map[YHero - 1][XHero]->WhoAmI() == obj::tree)
				bag.SetDesk(bag.GetDesk() + 5);

			else if (map[YHero - 1][XHero]->WhoAmI() == obj::bush)
			{
				bag.SetFood(bag.GetFood() + 2);
				bag.SetDesk(bag.GetDesk() + 2);
			}

			if (map[YHero - 1][XHero]->WhoAmI() != obj::dragon)
			{
				delete map[YHero - 1][XHero];
				map[YHero - 1][XHero] = nullptr;
			}
		}
	}
}

void Game::MoveDown()
{
	if (YHero == 19)
		return;

	if (map[YHero + 1][XHero] == nullptr)
	{
		map[YHero + 1][XHero] = map[YHero][XHero];
		map[YHero][XHero] = nullptr;
		YHero++;
	}
	else
	{
		map[YHero + 1][XHero]->SetHealth(map[YHero + 1][XHero]->GetHealth() - map[YHero][XHero]->GetPower());

		if (map[YHero + 1][XHero]->GetHealth() <= 0)
		{
			if (map[YHero + 1][XHero]->WhoAmI() == obj::wolf)
				bag.SetGold(bag.GetGold() + 5);

			else if (map[YHero + 1][XHero]->WhoAmI() == obj::deer)
				bag.SetFood(bag.GetFood() + 5);

			else if (map[YHero + 1][XHero]->WhoAmI() == obj::tree)
				bag.SetDesk(bag.GetDesk() + 5);

			else if (map[YHero + 1][XHero]->WhoAmI() == obj::bush)
			{
				bag.SetFood(bag.GetFood() + 2);
				bag.SetDesk(bag.GetDesk() + 2);
			}
			if (map[YHero + 1][XHero]->WhoAmI() != obj::dragon)
			{
				delete map[YHero + 1][XHero];
				map[YHero + 1][XHero] = nullptr;
			}
		}
	}

}
