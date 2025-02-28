#include"MyIntVector.h"
#include<iostream>
using namespace std;

MyIntVector::MyIntVector() {
	cout << "In the constructor" << endl << endl;
	m_capacity = 10;
	arrPtr = new int[m_capacity];
	m_size = 0;
};

void MyIntVector::push_back(int val) {
	if (m_size >= m_capacity) {
		resize(2 * m_capacity);
		cout << "Size exceeded capacity. Capacity has been doubled" << endl;
	}

	arrPtr[m_size] = val;
	++m_size;
}

int MyIntVector::size() {
	return m_size;
}

int MyIntVector::capacity() {
	return m_capacity;
}

void MyIntVector::resize(int i) {
	int* new_arrPtr = new int[i];
	if (i >= m_capacity) {
		for (int j = 0; j < m_capacity; j++) {
			new_arrPtr[j] = arrPtr[j];
		}
		for (int j = m_capacity; j < i; j++) {
			new_arrPtr[j] = 0;
		}
	}
	else {
		for (int j = 0; j < i; j++) {
			new_arrPtr[j] = arrPtr[j];
		}
	}
	m_capacity = i;
	delete[] arrPtr;
	arrPtr = new_arrPtr;
	
	

}

int MyIntVector::at(int i) {
	if (i >= m_capacity || i < 0) {
		cout << "index out of bounds" << endl;
		return -1;
		exit(1);
	}
	else {
		return arrPtr[i];
	}
	
}

MyIntVector::~MyIntVector() {
	cout << endl << "In the destructor" << endl;

	delete[] arrPtr;
	arrPtr = NULL;
}