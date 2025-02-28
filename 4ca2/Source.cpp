#include<iostream>

#include"LinkedListofBooks.h"
using namespace  std;

int main() {


	LinkedListofBooks list;

	list.insertFront(1, "test");
	list.insertFront(2, "test2");
	list.insertFront(3, "test3");
	list.insertFront(4, "test4");

	list.displayList();
	cout << endl;

	list.findbook(2);
	cout << endl << endl;


	list.deleteBook(1);
	cout << endl;

	list.displayList(); // doesnt work

	return 0;
}