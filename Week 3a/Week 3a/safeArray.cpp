#include"safeArray.h"
#include<iostream>

using namespace std;

int safeArray::at(int index_in) {
	if (index_in > size || index_in < 0) {
		cout << "array out of bounds" << endl;
		return -1;
		exit(1);
	}
	else {
		return arr[index_in];
	}
}

safeArray::safeArray(int size_in) {
	cout << "In the constructor" << endl;
	size = size_in;
	arr = new int[size_in];
	for (int i = 0; i < size_in; i++) {
		arr[i] = i;
	}
}

safeArray::~safeArray() {
	cout << "In the destructor" << endl;

	delete[] arr;
	arr = NULL;
}