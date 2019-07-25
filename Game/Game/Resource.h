#pragma once
#include"Object.h"


class Gold : public Object
{
private:

	int count;
	
public:

	Gold() : Object()
	{
		count = 0;
	}

	int GetCount()
	{
		return count;
	}

	void SetCount(int  count)
	{
		this->count = count;
	}

	void Print()
	{

	}
};

class Stone : public Object
{
private:

	int count;

public:

	Stone() : Object()
	{
		count = 0;
	}

	int GetCount()
	{
		return count;
	}

	void SetCount(int  count)
	{
		this->count = count;
	}

	void Print()
	{

	}
};

class Desk : public Object
{
private:

	int count;

public:

	Desk() : Object()
	{
		count = 0;
	}

	int GetCount()
	{
		return count;
	}

	void SetCount(int  count)
	{
		this->count = count;
	}

	void Print()
	{

	}
};