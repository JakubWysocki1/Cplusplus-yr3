#pragma once

class NodeofInt
{
friend class ListofInts;
public:
	NodeofInt();
	~NodeofInt();


private:
	int theValue;
	NodeofInt* next;
};


