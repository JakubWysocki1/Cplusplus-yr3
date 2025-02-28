#include"song.h"


Song::Song(string titlein, int durationin) {

	duration = durationin; 
	songTitle = titlein;
}

string Song::getTitle() {

	return songTitle;

}

int Song::getDuration() {

	return duration;

}

Song::~Song()
{
}