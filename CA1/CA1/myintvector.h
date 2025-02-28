#pragma once
/*
Jakub Wysocki - X00164430
*/

class myintvector{
public:
	void pushback(int);
	int size();
	int capacity();
	int operator[](int);
	myintvector();
	~myintvector();

private:
	int* arrPtr;
	int m_size;
	int m_capacity;
};

