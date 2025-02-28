#pragma once
#include"NodeofInts.h"

class ListofInts
{
	
public:
	ListofInts();
	void insertBack(int);
	void displayList();
	int deleteMostRecent();
	~ListofInts();
	


private:
	NodeofInt* head;
	
};


