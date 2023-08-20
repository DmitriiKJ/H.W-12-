#include "Book.h"

Book::Book()
{
    res = "Empty";
}

Book::Book(string n, string a, int y, string i, string r): Publication(n, a, y, i)
{
    res = r;
}

void Book::set_res(string r)
{
    res = r;
}

string Book::get_res() const
{
    return res;
}

void Book::show() const
{
    Publication::show();
    cout << "Res: " << res << endl;
}
