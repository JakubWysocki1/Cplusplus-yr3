#pragma once

class MyIntVector{

public:
	void push_back(int);
	int size();
	int capacity();
	void resize(int);
	int at(int);
	MyIntVector();
	~MyIntVector();
	
private:
	int m_size;
	int m_capacity;
	int* arrPtr;
};