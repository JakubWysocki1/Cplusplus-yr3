#include<iostream>
#include"safeArray.h"
using namespace std;

int main() {

	const int size = 4;
	const int index = 2;

	safeArray mySafeArray(size);
	
	cout << mySafeArray.at(index) << endl;
	//cout << mySafeArray << endl;

	

	return 0;
}
