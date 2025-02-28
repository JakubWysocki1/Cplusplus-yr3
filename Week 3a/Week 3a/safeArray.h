#pragma once

class safeArray {
private:
	int* arr;
	int size = 10;
public:
	int at(int);
	safeArray(int);
	~safeArray();
};