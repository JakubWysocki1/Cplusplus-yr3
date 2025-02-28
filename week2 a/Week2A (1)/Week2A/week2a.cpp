/* 
Sources Used:
https://stackoverflow.com/questions/1860983/convert-integer-to-array/1861022
*/


#include<iostream>
#include<random>


using namespace std;

int main() {
	//Task 1
	default_random_engine defEngine(time(0));
	uniform_int_distribution<int>intDistro(1, 25);

	int winners[4] = {};
	int nummatches = 0;



	for (int i = 0; i < 4; i++) {
		winners[i] = intDistro(defEngine);
		for (int j = 0; j < i; j++) {
			if (winners[i] == winners[j]){
				i--;	
			}
		}	
	}
	
	for (int l = 0; l < 4; l++) {
		cout << "Winner " << (l +1) << ": " << winners[l] << endl;
	}
	cout << endl;
		
	//Task 2
	uniform_int_distribution<int>intDistro2(1, 3);

	int rand_nums[10] = {};
	int num_pin_array[5] = {};
	int num_pin = 0;
	int real_pin[5] = {1,2,3,4,5};

	// random nums assigment
	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM: ";
	for (int i = 0; i < 10; i++) {
		int num = intDistro2(defEngine);
		rand_nums[i] = num;
		cout << num << " ";
	}
	cout << endl;

	//pin enter and verification if matches conditions
	cout << "Enter Pin: ";
	cin >> num_pin; 
	if (num_pin > 99999 || num_pin < 00000) {
		cout << "Please enter pin again in the range 00000 to 99999" << endl;
		cin >> num_pin;
	}

	cout << endl;

	// int to list
	for (int i = 4; i >= 0 ; i--) {
		num_pin_array[i] = num_pin % 10;
		num_pin /= 10;
	}

	//check if pin number correspond with real pin
	bool confirmed = false;
	for (int i = 0; i < 5; i++) {
		int corresponding_num = rand_nums[real_pin[i]];
		if (corresponding_num == num_pin_array[i]) {
			confirmed = true;
		}
		else {
			cout << "Numbers dont match real pin!!" << endl;
			exit(0);
		}
	}
	if (confirmed == true) {
		cout << "Pin Matches Real Pin";
	}
	return 0;
}

