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

	void add(Publication*);
	void del(string n);
	void find()const;
	void show()const;

	~Library();
};

