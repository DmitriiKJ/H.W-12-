#pragma once
#include <iostream>
#include <string>
#include "PublicationException.h"
using namespace std;

class Publication
{
protected:
	string name;
	string author;
	int year;
	string info;

public:
	Publication();
	Publication(string n, string a, int y, string i);

	void set_name(string n);
	void set_author(string n);
	void set_year(int y);
	void set_info(string n);

	string get_name()const;
	string get_author()const;
	int get_year()const;
	string get_info()const;

	virtual void show()const;
	virtual string type()const;
};