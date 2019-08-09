#pragma once

using namespace std;

class Bag
{
private:
	
	int gold;
	int food;
	int desk;

public:

	Bag()		
	{
		 gold=0;
		 food=0;
		 desk=0;
	}

	void SetGold(int count)
	{
		gold = count;
	}

	void SetFood(int count)
	{
		food = count;
	}
	
	void SetDesk(int count)
	{
		desk=count;
	}

	int GetGold()
	{
		return gold;
	}

	int GetFood()
	{
		return food;
	}

	int GetDesk()
	{
		return desk;
	}

};
