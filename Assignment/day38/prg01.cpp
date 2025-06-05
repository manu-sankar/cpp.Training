#include<iostream>
#include<list>
#include<string>

using namespace std;

list<string>lst;
string commands;
auto cursor = lst.begin();

void addString(const string& str)
{
	if (lst.empty())
	{
		lst.push_back(str);
		cursor = lst.begin();
	}
	else
	{
		cursor = lst.insert(cursor, str);
	}
}


void addUp()
{
	if (cursor != lst.begin())
	{
		cursor--;
	}
	else
	{
		cout<<"Already at the top "<<endl;
	}
}


void addDown()
{
	auto nextCursor = next(cursor);
	if (nextCursor != lst.end())
	{
		cursor++;
	}
	else
	{
		cout << "Already at the down" << endl;
	}
}


void display()
{
	cout << "Lines are ";
	for (const auto i : lst)
		cout << i << endl;
}


int main()
{
	int options;
	string str;

	cout << "INSERT " << endl;
	cout << "UP " << endl;
	cout << "DOWN " << endl;
	cout << "EXIT " << endl;

	while (true)
	{
		cin >> options;
		switch (options)
		{
		default:
			break;
		case 1:
			cout << "Enter 1st string ";
			getline(cin, str);
			addString(str);
			break;
		case 2:
			addUP(str);
			break;
		case 3:
			addDown(str);
			break;
		case 4:
			exit(0);
			break;
		}
	}
}

