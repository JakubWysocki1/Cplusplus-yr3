#pragma once
#include"NodeofBook.h"
class LinkedListofBooks
{
public:
	LinkedListofBooks();
	~LinkedListofBooks();
	friend ostream& operator<<(ostream& os,LinkedListofBooks&);
	void insertFront(int,string);
	void displayList();
	void findbook(int);
	int deleteFromBack();
	LinkedListofBooks(const LinkedListofBooks&);
	LinkedListofBooks& operator=(const LinkedListofBooks& rhs);
	void deleteBook(int);


private:
	NodeofBook* head;
};

