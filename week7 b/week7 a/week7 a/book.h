#pragma once
using namespace std;
#include<iostream>

class Book {
private:
	int isbn;
	string title;

public:
	Book();
	~Book();
	int Getisbn();
	string GetTitle();
	void Setisbn(int);
	void Settitle(string);
};