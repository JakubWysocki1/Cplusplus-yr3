#include<iostream>
#include"rotLeft.h"
using namespace std;

int main(){
	int sizeofarray;
	int norotations;

	cout << "Enter size of the array:";
	cin >> sizeofarray;
	if (sizeofarray <= 1 || sizeofarray >= 494967295) {
		cout << "Please re-enter the size of array(1-494967295):";
		cin >> sizeofarray;
	}

	cout << "Enter number of rotations:";
	cin >> norotations;
	if (norotations <= 1 || norotations >= sizeofarray) {
		cout << "Re-enter number of left rotations(1-size of array):";
		cin >> norotations;
	}
	cout << endl;


	rotate(sizeofarray, norotations);


	return 0;

}