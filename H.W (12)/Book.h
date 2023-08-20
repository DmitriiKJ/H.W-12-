#pragma once
#include "Publication.h"

class Book : public Publication
{
protected:
	string res;

public:
	Book();
	Book(string n, string a, int y, string i, string r);

	void set_res(string r);
	string get_res()const;

	void show()const;
	virtual string type()const override;
};

