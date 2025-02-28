#pragma once
#include"book.h"
#include<iostream>
using namespace std;

class NodeofBook {
	friend class LinkedListofBooks;
private:
	Book theBook;
	NodeofBook* next;	

public:
	NodeofBook();
	~NodeofBook();
};