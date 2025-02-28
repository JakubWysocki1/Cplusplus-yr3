#include"rotLeft.h"
#include<iostream>
#include<vector>

using namespace std;

int rotate(int n, int d) {
	vector<int> rotleft;
	
	//appending array 
	for (int i = 1; i <= n; i++) {
		rotleft.push_back(i);
	}

	int* temparr = new int[(d-1)];
	int* temparr2 = new int[(n - d - 1)];
	
	for ( int i= 0; i < d ; i++) { // i < 3 
		temparr[i] = rotleft[i];
		
	}


	for (int i = d  ; d < n  ; i++) {
		temparr2[0] = rotleft[i];
	}


	for (int i = 0; i < n; i++) {
		cout << rotleft[i];
	}

	cout << endl;
	for (int i = 0; i < d; i++) {
		cout << temparr[i];

	}
	
	cout << endl;
	for (int i = 0; i < n - d ; i++) {
		cout << temparr2[i];

	}
	
	return 0;
}



