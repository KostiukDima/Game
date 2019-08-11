#pragma once
#include<iostream>
#include<conio.h>
#include"Map.h"
#include"Bag.h"
#include"Line.h"
#include<Windows.h>

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

	void Ran();	
	
	void Print(int y, int x);

	void Delete();	

	void MoveRight();
	
	void MoveLeft();
	
	void MoveUp();
	
	void MoveDown();
	
};
