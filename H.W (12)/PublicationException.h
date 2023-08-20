#include <iostream>
#include <string>
using namespace std;

class PublicationException
{
protected:
	string name;

public:
	virtual void Message()const = 0;
};

class BookException: public PublicationException
{
public:
	BookException(string n)
	{
		name = n;
	}

	virtual void Message()const override
	{
		cout << "Error: " << name << endl;
	}
};

class EditionYearException: public PublicationException
{
	int y;
public:
	EditionYearException(int year)
	{
		name = "Unable to create publication - invalid publication year: ";
		y = year;
	}

	virtual void Message()const override
	{
		cout << name << y << endl;
	}
};