#pragma once
using namespace std;
#include<iostream>

class Song
{
public:
	Song(string, int);
	~Song();
	string getTitle();
	int getDuration();


private:
	string songTitle;
	int duration;
};

