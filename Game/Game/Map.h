#pragma once
#include"Object.h"
#include"Hero.h"
#include<vector>
#include<ctime>
using namespace std;


class Map
{
protected:

	int col, row;

	vector<vector<Object*>> map;

public:

	Map();
	~Map();
	Map &operator = ( Map && other);

	void Print();

	
};