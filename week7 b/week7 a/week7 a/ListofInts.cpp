/*
SOURCES USED:
https://www.youtube.com/watch?v=0CBLbYTW9GE
https://www.youtube.com/watch?v=C63icK3EPxw
*/


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

ostream& operator<<(ostream& os, ListofInts& li)
{
	string list;
	if (li.head != NULL) {
		li.displayList();
	}
	else list = "Empty List";
	return os << list;
	
}

ListofInts::ListofInts(const ListofInts& obj) {
	if (obj.head == NULL) {
		head = NULL;
	}
	NodeofInt* temp = obj.head;
	NodeofInt* newNode = nullptr;

	while (temp != nullptr) {
		newNode = new NodeofInt();
		newNode->theValue = temp->theValue;
		newNode->next = head;
		head = newNode;
		temp = temp->next;
	}
}

ListofInts& ListofInts::operator=(const ListofInts& rhs){
	if (this != &rhs) {
		NodeofInt* newNode = nullptr;
		NodeofInt* temp = rhs.head;
		while (temp != nullptr) {
			newNode = new NodeofInt();
			newNode->theValue = temp->theValue;
			newNode->next = head;
			head = newNode;
			temp = temp->next;
		}

	}
	return *this;
}

ListofInts::~ListofInts()
{
	head = nullptr;
}