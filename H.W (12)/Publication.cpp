#include "Publication.h"

Publication::Publication()
{
    name = "Empty";
    author = "Empty";
    year = 1;
    info = "Empty";
}

Publication::Publication(string n, string a, int y, string i)
{
    if (y <= 0) throw (new EditionYearException(y));
    name = n;
    author = a;
    year = y;
    info = i;
}

void Publication::set_name(string n)
{
    name = n;
}

void Publication::set_author(string n)
{
    author = n;
}

void Publication::set_year(int y)
{
    year = y;
}

void Publication::set_info(string n)
{
    info = n;
}

string Publication::get_name() const
{
    return name;
}

string Publication::get_author() const
{
    return author;
}

int Publication::get_year() const
{
    return year;
}

string Publication::get_info() const
{
    return info;
}

void Publication::show() const
{
    if (name.size() == 0) throw (new BookException("name is empty!"));
    else if (author.size() == 0) throw (new BookException("author is empty!"));

    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Info" << info << endl;
}

string Publication::type() const
{
    return "Publication";
}
