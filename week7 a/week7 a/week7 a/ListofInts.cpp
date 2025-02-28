#include"ListofInts.h"
#include<iostream>
using namespace std;

ListofInts::ListofInts(){

}



void ListofInts::insertBack(int value) {
	NodeofInt* newNode = new NodeofInt;
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

}

ListofInts::~ListofInts() {
	
}