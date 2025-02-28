#include<iostream>
#include<random>
#include<fstream>
#include<string>

/*
Sources:
https://www.learncpp.com/cpp-tutorial/basic-file-io/
*/

using namespace std;

void getHighScores(string Strings[], int integers[]){
	ifstream MyReadFile("scores.txt");

	if (!MyReadFile.is_open()) {
		// The file could not be opened
		cout << "Error File couldnt be open";
	}
	else {
		// Safely use the file stream
		string Input;
		int counter = 0;

		int stringcounter = 0;
		int intcounter = 0;

		//take each "word" from text file as string and append it to array
		while (MyReadFile) {
			MyReadFile >> Input;
			if (counter < 10) {
				if (counter % 2 == 0) {
					Strings[stringcounter] = Input;
					stringcounter++;
				}
				else {
					integers[intcounter] = stoi(Input); //used stoi as didnt know any other way to cast string to int
					intcounter++;
				}

				counter++;
			}
		}
		MyReadFile.close();
	}

	//sorts arrays from max to min
	for (int i = 0; i < 5; i++) {
		int currentnumber = integers[i];
		string currentstring = Strings[i];

		for (int j = 0; j < i; j++) {
			int previousnumber = integers[j];
			string previousstring = Strings[j];

			if (previousnumber < currentnumber) {
				integers[j] = currentnumber;
				integers[i] = previousnumber;
				Strings[j] = currentstring;
				Strings[i] = previousstring;
				i--;
			}
		}
	}


	cout << "Top 3 players according to scores:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Player " << i+1 << ": " << Strings[i] << endl;
		cout << "Score: " << integers[i] << endl;
		cout << endl;
	}

}


int main() {
	string player[5] = {};
	int scores[5] = {};

	getHighScores(player, scores);
	return 0;
}