#pragma once
#include"Object.h"
#include"Hero.h"
#include<vector>
#include<ctime>
using namespace std;


class Map
{
private:

	int col, row;

	vector<vector<Object*>> map;

public:

	Map();

	~Map();

	void Print();

};