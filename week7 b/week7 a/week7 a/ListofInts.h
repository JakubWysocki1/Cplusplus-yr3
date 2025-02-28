#pragma once
#include"NodeofInts.h"
#include<iostream>
using namespace std;

class ListofInts
{
	
public:
	friend ostream& operator<<(ostream& os, ListofInts& li);
	ListofInts();
	void insertBack(int);
	void displayList();
	int deleteMostRecent();
	ListofInts(const ListofInts&);
	ListofInts& operator=(const ListofInts& rhs);
	~ListofInts();
	


private:
	NodeofInt* head;
	
};


