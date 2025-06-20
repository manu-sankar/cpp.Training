#include<iostream>
#include<string>

using namespace std;

typedef struct Book
{
	string title;
	string author;
	float price;
};

void acceptData(Book book[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << "Enter Book title " << endl;
		cin.ignore();
		getline(cin, book[i].title);
		cout << "Enter author " << endl;
		getline(cin, book[i].author);
		cout << "Enter price " << endl;
		cin >> book[i].price;
	}
}

void disp(Book book[], int size)
{
	for (int i = 0;i < size;i++)
	{
		if (book[i].price > 500)
		{
			cout << "Books with price greater than 500 " << book[i].title << endl;
		}
	}
}

void dispHighest(Book book[], int size)
{
	float highest = book[0].price;
	for (int i = 0;i < size;i++)
	{
		if (book[i].price > highest)
		{
			highest = book[i].price;
		}
	}
	cout << "Highest price " << highest;
}

int main()
{
	const int size = 5;
	Book book[size];
	acceptData(book, size);
	disp(book, size);
	dispHighest(book, size);

	return 0;
}