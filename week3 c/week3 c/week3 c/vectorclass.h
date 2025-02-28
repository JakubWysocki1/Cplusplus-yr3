#pragma once

/*
Sources used :
https://www.codeproject.com/Articles/48575/How-to-Define-a-Template-Class-in-a-h-File-and-Imp
*/

template <class T> 
class vectorclass {
public:
	void push(T);
	void push(int, int);
	T get(int);
	void pop();
	int getcapacity();
	int size();
	void print();
	vectorclass();
	~vectorclass();

private:
	T* arr;
	int capacity;
	int current;
};
