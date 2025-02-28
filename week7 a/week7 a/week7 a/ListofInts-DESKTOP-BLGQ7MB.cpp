#include"ListofInts.h"
#include<iostream>
using namespace std;

ListofInts::ListofInts() {
	head = nullptr;
}

void ListofInts::insertBack(int value) {
	NodeofInt* newNode = new NodeofInt();
	newNode->theValue = value;
	newNode->next = head;
	head = newNode;
	
}

void ListofInts::displayList() {
	NodeofInt* temptr = head;
	while (temptr != NULL)
	{
		cout << temptr -> theValue;
		temptr = temptr->next;
	}

}

int ListofInts::deleteMostRecent() {
	/*
	NodeofInt* temptr = head;
	NodeofInt* newNode = temptr->next;


 */
	return 0;
}

ListofInts::~ListofInts()
{
	head = nullptr;
}