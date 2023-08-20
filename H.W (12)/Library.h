#pragma once
#include "Magazine.h"
#include "Book.h"

class Library
{
	string name;
	vector<Publication*> arr;

public:
	Library();

	void set_name(string n);
	string get_name()const;

	void add(Publication* a);
	void del(string n);
	void find(int i)const;
	void show()const;

	~Library();
};

