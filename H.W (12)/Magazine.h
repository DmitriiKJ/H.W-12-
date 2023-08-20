#pragma once
#include "Publication.h"
#include <vector>

class Magazine : public Publication
{
protected:
	vector<string> articles;

public:
	Magazine();
	Magazine(string n, string a, int y, string i);

	void add_ar(string a);
	vector<string> get_articles()const;

	void show()const;
	virtual string type()const override;
};

