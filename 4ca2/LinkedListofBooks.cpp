#include"LinkedListofBooks.h"
#include<iostream>
using namespace std;

LinkedListofBooks::LinkedListofBooks(){
	head = nullptr;
}

ostream& operator<<(ostream& os, LinkedListofBooks& li) {
	string list;
	if (li.head != NULL) {
		li.displayList();
	}
	else list = "Empty List";
	return os << list;

}

void LinkedListofBooks::insertFront(int value, string title) {
	NodeofBook* newnode = new NodeofBook();
	newnode->theBook.Setisbn(value);
	newnode->theBook.Settitle(title);
	newnode->next = head;
	head = newnode;
}

void LinkedListofBooks::LinkedListofBooks::displayList() {
	NodeofBook* temptr = head;
	while (temptr != NULL)
	{
		cout << temptr->theBook.Getisbn() << " " << temptr->theBook.GetTitle() << endl;
		temptr = temptr->next;
	}

}

void LinkedListofBooks::LinkedListofBooks::findbook(int isbm) {
	NodeofBook* temptr = head;
	while (temptr != NULL) {
		if (temptr->theBook.Getisbn() == isbm) {
			cout << temptr->theBook.Getisbn() << " " << temptr->theBook.GetTitle();
			
		}
		temptr = temptr->next;
	}
}

int LinkedListofBooks::deleteFromBack() {
	int returnvalue = -1;

	NodeofBook* currPtr = head;
	NodeofBook* newPtr = currPtr->next;

	if (head) {
		while (newPtr->next != NULL) {
			currPtr = newPtr;
			newPtr = currPtr->next;
		}
		returnvalue = newPtr-> theBook.Getisbn();
		delete newPtr;
		currPtr->next = nullptr;
	}
	return returnvalue;
}

LinkedListofBooks::LinkedListofBooks(const LinkedListofBooks& obj) {
	if (obj.head == NULL) {
		head = NULL;
	}
	NodeofBook* newNode = nullptr;
	NodeofBook* temp = obj.head;
	while (temp != nullptr) {
		newNode = new NodeofBook();
		newNode->theBook.Setisbn(temp->theBook.Getisbn());
		newNode->theBook.Settitle(temp->theBook.GetTitle());
		newNode->next = head;
		head = newNode;
		temp = temp->next;
	}
}

LinkedListofBooks& LinkedListofBooks::operator=(const LinkedListofBooks& rhs) {
	if (this != &rhs) {
		NodeofBook* newNode = nullptr;
		NodeofBook* temp = rhs.head;
		while (temp != nullptr) {
			newNode = new NodeofBook();
			newNode-> theBook.Setisbn(temp->theBook.Getisbn());
			newNode-> theBook.Settitle(temp->theBook.GetTitle());
			newNode->next = head;
			head = newNode;
			temp = temp->next;
		}
	}
	return *this;
}

void LinkedListofBooks::deleteBook(int isbnToDelete) {
	//doesnt work
	if (head != nullptr) {
		NodeofBook* currPtr = head;
		NodeofBook* newPtr = currPtr->next;
		while (currPtr != NULL) {
			if (currPtr->theBook.Getisbn() == isbnToDelete) {
					currPtr = newPtr;
					newPtr = currPtr->next;
					delete newPtr;
					currPtr->next = nullptr;
			}
			currPtr = currPtr->next;
		}
		
	}
}




LinkedListofBooks::~LinkedListofBooks()
{
	head = nullptr;
}