/*
Sources used:
https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
https://www.tutorialspoint.com/cplusplus/assignment_operators_overloading.htm
https://stackoverflow.com/questions/11347599/how-to-define-an-assignment-operator-outside-my-header-file-in-c
*/

#include"MyIntVector.h"
#include<iostream>
using namespace std;

int main() {
	//test 1

	MyIntVector myintvector;

	cout << "TEST 1 - fill in the vector fully \n--------------" << endl;
	cout << "Values in the vector: ";
	for (int i = 0; i < 10; i++) {
		myintvector.push_back(i);
		cout << myintvector.at(i) << ",";
	}
	
	cout << endl << "Current Capacity: " << myintvector.capacity();
	cout << endl << "Current vector size: " << myintvector.size();
	cout << endl << "Available space : " << myintvector.capacity() - myintvector.size() << endl;
	/*
	//test 2
	cout << endl << "TEST 2 - add a value outside of capacity\n--------------" << endl ;
	myintvector.push_back(11);
	cout << "Values in the vector: ";
	for (int i = 0; i < myintvector.capacity(); i++) {
		cout << myintvector.at(i) <<",";
	}

	cout << endl << "Current Capacity: " << myintvector.capacity();
	cout << endl << "Current vector size: " << myintvector.size();
	cout << endl << "Available space : " << myintvector.capacity() - myintvector.size() << endl;
	*/
	//test 3
	
	cout << endl << "TEST 3 - increase the size of vector to size 13\n--------------" << endl ;
	myintvector.resize(13);
	cout << "Values in the vector: ";
	for (int i = 0; i < myintvector.capacity(); i++) {
		cout << myintvector.at(i) << ",";
	}

	cout << endl << "Current Capacity: " << myintvector.capacity();
	cout << endl << "Current vector size: " << myintvector.size();
	cout << endl << "Available space : " << myintvector.capacity() - myintvector.size() << endl;
	

	//test 4 
	cout << endl << "TEST 4 - decrease the size of vector to size 11\n--------------" << endl;
	myintvector.resize(11);
	cout << "Values in the vector: ";
	for (int i = 0; i < myintvector.capacity(); i++) {
		cout << myintvector.at(i) << ",";
	}

	cout << endl << "Current Capacity: " << myintvector.capacity();
	cout << endl << "Current vector size: " << myintvector.size();
	cout << endl << "Available space : " << myintvector.capacity() - myintvector.size() << endl;

	return 0;
}
