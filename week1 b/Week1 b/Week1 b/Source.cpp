/*
 
SOURCE USED TO SOLVE THE TASKS: https://stackoverflow.com/questions/32339217/c-birthday-paradox-program
								https://www.oreilly.com/library/view/optimized-c/9781491922057/ch01.html

*/

#include<random>
#include<iostream>
using namespace std;

int main() {
	default_random_engine defEngine;
	uniform_int_distribution<int>intDistro(1, 365);

	int birthdays[50] = {}; //initializes array of size 50 


	for (int people = 2; people <= 50 ; people++) { // loops from 2 to 50 people in incremets of 1
		float nummatches = 0; //sets nummatches to float as later on the calculations will be in float
		for (int trials = 0; trials < 5000; trials++) { // loops from 0 to 5000 trials 
			for (int i = 0; i < people; i++) { // loop that goes through each index of the array and populates it with a random number for a set number of people
				birthdays[i] = intDistro(defEngine); //populates the array with random number generated between 1 and 365
				for (int j = 0; j < i; j++) { //loop to check if the numbers under each index in the array match
					if (birthdays[j] == birthdays[i]) {
						nummatches++; // if the indexes match num matches gets appended 
					}
				}
			}
		}
		float probability = nummatches / 5000.00;
		cout << "For " << people << " people, the probability of two birthdays is about " << probability << endl; 
	}
	return 0;
}
