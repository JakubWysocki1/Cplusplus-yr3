#include"MyIntVector.h"
#include<iostream>
using namespace std;

int main() {
	//test 1

	MyIntVector myintvector;

	for (int i = 0; i < 10; i++) {
		myintvector.push_back(i);
	}

	cout << "Constructor size:" << myintvector.size() << endl;
	cout << "Constructor Capacity:" << myintvector.capacity() << endl;

	cout << endl;
	MyIntVector myintvector2 (myintvector);

	cout << "Copy Constructor size:" << myintvector2.size() << endl;
	cout << "Copy Constructor capacity:" << myintvector2.capacity() << endl;

	cout << endl;
	cout << "Values in vector 1" << endl;
	for (int i = 0; i < 10; i++) {
		cout << myintvector.at(i) << ",";
	}

	cout << endl << endl;
	MyIntVector myintvector3;

	cout << "Values in vector 3" << endl;
	for (int i = 10; i < 20; i++) {
		myintvector3.push_back(i);
	}
	for (int i = 0; i < 10; i++) {
		cout << myintvector3.at(i) << ",";
	}
	
	cout << endl << endl;

	myintvector3 = myintvector;
	
	cout << "Values in constructor 3 after assigning it to constructor 1" << endl;
	for (int i = 0; i < 10; i++) {
		cout << myintvector3.at(i) << ",";
	}


	
}
