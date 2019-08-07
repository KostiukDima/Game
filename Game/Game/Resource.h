#pragma once

class Resource
{

public:

	Resource(){}

	virtual int GetCount() = 0;	

	virtual void SetCount(int  count) = 0;

	virtual void Print() = 0;
	
};

class Gold : Resource
{
private:

	int count;
	
public:

	Gold() :Resource()
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

class Food :Resource
{
private:

	int count;

public:

	Food() :Resource()
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

class Desk :Resource
{
private:

	int count;

public:

	Desk() :Resource()
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