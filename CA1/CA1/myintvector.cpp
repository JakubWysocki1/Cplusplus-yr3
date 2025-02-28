/*
Jakub Wysocki - X00164430
*/

#include"myintvector.h"
#include<iostream>
using namespace std;

myintvector::myintvector(){
	m_size = 0;
	m_capacity = 10;
	arrPtr = new int[m_capacity];

}

void myintvector::pushback(int val) {
	if (m_size > m_capacity || m_size < 0) {
		cout << "Error adding element " << val <<  ". Capacity of vector exceeded. Vector need to be reallocated" << endl;
		//exit(-1);
	}

	else {
		arrPtr[m_size] = val;
		++m_size;
	}

}

int myintvector::size() {
	return m_size;
}

int myintvector::capacity() {
	return m_capacity;
}

int myintvector::operator[](const int i) {
	if (i > m_capacity || i < 0) {
		cout << "ERROR. Accessed value outsiede of vector" << endl;
		exit(-1);
	}
	return arrPtr[i];
}


myintvector::~myintvector(){
	delete[] arrPtr;
	arrPtr = NULL;
}