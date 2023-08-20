#include "Library.h"

int main()
{
	Library lib("Just library");
	Publication* a1 = new Book("name", "Author", 1840, "", "Good");
	Publication* a3 = new Book("name1", "", 1840, "", "Good");
	Publication* a2 = new Book("", "Author1", 1841, "", "Good1");
	try
	{
		Publication* a4 = new Book("", "Author1", 0, "", "Good1");
	}
	catch (PublicationException* n)
	{
		n->Message();
	}

	lib.add(a1);
	lib.add(a2);
	lib.add(a3);

	lib.show();
	lib.del("");
	lib.del("name1");
	cout << "---------------------" << endl;
	lib.show();
	return 0;
}