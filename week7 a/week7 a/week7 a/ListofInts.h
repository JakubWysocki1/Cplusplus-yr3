#pragma once
#include"NodeofInts.h"

class ListofInts
{
	
public:
	ListofInts();
	~ListofInts();
	void insertBack(int);
	void displayList();
	int deleteMostRecent();


private:
	NodeofInt* head;
	
};

