#include<iostream>
#include"ListofInts.h"

int main() {
	ListofInts list;

	list.insertBack(2);

	list.displayList();

	list.insertBack(4);

	list.displayList();


	return 0;
}