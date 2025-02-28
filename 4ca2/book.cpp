#include"book.h"
#include<iostream>
using namespace std;

Book::Book() {
	title = "";
	isbn = 0;
}

int Book::Getisbn() {
	return isbn;
}

string Book::GetTitle() {
	return title;
}

void Book::Setisbn(int isbnIn) {
	isbn = isbnIn;
}

void Book::Settitle(string titleIn) {
	title = titleIn;
}

Book::~Book() {

}