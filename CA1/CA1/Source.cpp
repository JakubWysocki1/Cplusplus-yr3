/*
Jakub Wysocki - X00164430
*/

#include"myintvector.h"
#include<iostream>
using namespace std;

int main() {
	myintvector myvector;


	cout << "Test 1 \n------------" << endl;
	for (int i = 0; i < 6; i++) {
		myvector.pushback(i);
	}
	cout << "Current vector capacity: " << myvector.capacity() << endl;
	cout << "Current vector size: " << myvector.size() << endl;
	cout << "Available space: " << (myvector.capacity() - myvector.size()) << endl;
	cout << "Values in vector:" << endl;

	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.operator[](i) << ",";
	}
	cout << endl;


	cout << endl << "Test 2 \n------------" << endl;
	for (int i = 6; i < 10;  i++) {
		myvector.pushback(i);
	}
	cout << "Current vector capacity: " << myvector.capacity() << endl;
	cout << "Current vector size: " << myvector.size() << endl;
	cout << "Available space: " << (myvector.capacity() - myvector.size()) << endl;
	cout << "Values in vector:" << endl;
	
	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.operator[](i)<<  "," ;
	}
	cout << endl;


	cout << endl << "Test 3\n------------" << endl;
	for (int i = 15; i < 20;  i++) {
		myvector.pushback(i);
	}
	cout << "Current vector capacity: " << myvector.capacity() << endl;
	cout << "Current vector size: " << myvector.size() << endl;
	cout << "Available space: " << (myvector.capacity() - myvector.size()) << endl;
	cout << "Values in vector:" << endl;

	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.operator[](i) << ",";
	}
	cout << endl;


	cout << endl << "Test 4\n------------" << endl;
	cout << myvector.operator[](12) ;

	cout << endl;


	return 0;
}