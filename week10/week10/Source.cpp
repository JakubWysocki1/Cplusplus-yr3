/*
COMPLETED WITH THE HELP OF Karlo Prukner - X00162302
*/

#include <iostream>
#include <deque>
#include"song.h"
using namespace std;


int main() {
	deque<Song> musicplaylist;

	int duration;
	string title;
	//adding first song
	cout << "Enter song title" << endl;
	cin >> title;

	cout << "Enter song duration" << endl;
	cin >> duration;

	Song* newsong = new Song(title, duration);
	musicplaylist.push_back(*newsong);

	//adding second song
	cout << "Enter song title" << endl;
	cin >> title;

	cout << "Enter song duration" << endl;
	cin >> duration;

	Song* newsong2 = new Song(title, duration);
	musicplaylist.push_back(*newsong2);

	//displaying playlist
	cout << "Songs in playlist: " << endl;
	for (int i = 0; i < musicplaylist.size(); i++) {
		cout << "Ttitle: " << musicplaylist[i].getTitle() << " | ";
		cout << "Duration " << musicplaylist[i].getDuration() << endl;

	}

	cout << endl;

	// playing first song (gets removed since its played)
	musicplaylist.pop_front();


	//displaying playtlist after playing first song
	cout << "Songs in playlist: "<< endl;
	for (int i = 0; i < musicplaylist.size(); i++) {
		cout << "Ttitle: " << musicplaylist[i].getTitle() << " |";
		cout << "Duration " << musicplaylist[i].getDuration() << endl;


	}
	
	


	return 0;
}