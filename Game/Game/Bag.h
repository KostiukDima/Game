#pragma once
#include"Resource.h"
#include<vector>

using namespace std;

enum resource {gold, food, desk };


class Bag
{
private:
	
	vector<Resource> bag;

public:

	Bag()
	{
		bag.reserve(3);
	}

	void SetGold(int count)
	{
		bag[gold].SetCount(count);
	}

	void SetFood(int count)
	{
		bag[food].SetCount(count);
	}
	
	void SetDesk(int count)
	{
		bag[desk].SetCount(count);
	}

	int GetGold()
	{
		return bag[gold].GetCount();
	}

	int GetFood(int count)
	{
		return bag[food].GetCount();
	}

	int GetDesk(int count)
	{
		return bag[desk].GetCount();
	}

};
