#include "Library.h"

Library::Library()
{
    name = "Empty";
}

Library::Library(string n)
{
    name = n;
}

void Library::set_name(string n)
{
    name = n;
}

string Library::get_name() const
{
    return name;
}

void Library::add(Publication* a)
{
    arr.push_back(a);
}

void Library::del(string n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]->get_name() == n)
        {
            arr.erase(arr.begin() + i);
        }
    }
}

void Library::find(int i) const
{
    if (i == 1)
    {
        string s;
        cout << "Enter name: ";
        getline(cin, s);

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]->get_name() == s)
            {
                arr[i]->show();
                cout << "========================" << endl;
            }
        }
    }
    else if (i == 2)
    {
        string s;
        cout << "Enter author: ";
        getline(cin, s);

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]->get_author() == s)
            {
                arr[i]->show();
                cout << "========================" << endl;
            }
        }
    }
    else if (i == 3)
    {
        int s;
        cout << "Enter name: ";
        cin >> s;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]->get_year() == s)
            {
                arr[i]->show();
                cout << "========================" << endl;
            }
        }
    }
}

void Library::show() const
{
    for (int i = 0; i < arr.size(); i++)
    {
        try
        {
            arr[i]->show();
        }
        catch (PublicationException* n)
        {
            n->Message();
        }
        cout << "========================" << endl;
    }
}

Library::~Library()
{
    for (int i = 0; i < arr.size(); i++)
    {
        delete arr[i];
    }
}
