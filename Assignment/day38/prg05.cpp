#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	set<int>usr;
	string commands;
	while (true)
	{
		cout << "Enter the commands";
		cout << endl;
		cin >> commands;
		if (commands == "VISIT")
		{
			int id;
			cin >> id;
			usr.insert(id);
		}
		else if (commands == "UNIQUE")
		{
			cout << usr.size() << " " << endl;
		}
		else if (commands == "TOP")
		{
			for (auto i : usr)
				cout << i << " " << endl;
		}

	}
}
