#include "Map.h"

Map::Map()
{
	srand(unsigned(time(NULL)));

	col = 20;
	row = 20;

	map.resize(col, std::vector<Object*>(row));
	   	  
	int tmp;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (i == 0 && j == 0)
			{
				map[i][j] = new Hero();
			}
			else if (i == 19 && j == 19)
			{
				map[i][j] = new Dragon();
			}
			else
			{
				tmp = rand() % 11 + 2;

				switch (tmp)
				{
				case wolf:
					map[i][j] = new Wolf();
					break;

				case tree:
					map[i][j] = new Tree();
					break;

				case deer:
					map[i][j] = new Deer();
					break;

				case bush:

					map[i][j] = new Bush();
					break;

				default:
					map[i][j] = nullptr;
					break;
				}
			}
		}
	}
}

Map::~Map()
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (map[i][j] != nullptr)
				delete map[i][j];
		}
	}
}

Map & Map::operator=(Map && other)
{
	this->col = other.col;
	this->row = other.row;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (map[i][j] != nullptr)
			{
				this->map[i][j] = other.map[i][j];
				other.map[i][j] = nullptr;
			}
			
		}
	}

	return *this;
}

void Map::Print()
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{

			if (map[i][j] == nullptr)
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
}
