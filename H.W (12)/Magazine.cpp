#include "Magazine.h"

Magazine::Magazine()
{
}

Magazine::Magazine(string n, string a, int y, string i): Publication(n, a, y, i)
{
}

void Magazine::add_ar(string a)
{
    articles.push_back(a);
}

vector<string> Magazine::get_articles() const
{
    return articles;
}

void Magazine::show() const
{
    Publication::show();
    cout << "Articles: " << endl;
    for (int i = 0; i < articles.size(); i++)
    {
        cout << articles[i] << endl;
    }
}
