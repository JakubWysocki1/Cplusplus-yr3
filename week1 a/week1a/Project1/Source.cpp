#include<iostream>
using namespace std;

int main() {
	cout << "Hello";
	cout << "\n";
	string first = "Mary";
	string last = "Rose";
	cout << "Hello " + first + "\n";
	cout << first + " " + last;
	int total = 10;
	cout << total + ".";
	cout << "Wait... ";
	string person;
	cout << "Whats your name? ";
	cin >> person;
	cout << "Hi " + person + "\n";
	cout << "Done \n\n";

	for (int i = 1; i < 100; i++) {

		string Fizz = "Fizz";
		string Buzz = "Buzz";
		string Woof = "Woof";

		int first_digit = 0;
		int second_digit = 0;

		if (i > 9) {

			first_digit = i / 10;
			second_digit = i % 10;

		}

		if (i % 3 == 0) {
			cout << Fizz;

		}
		
		
		else if (i % 5 == 0) {
			cout << Buzz;

		}

		else if (i % 7 == 0) {
			cout << Woof;
		}

		else {
			cout << i;
		}
		cout << ", ";
	}

	return 0;
}