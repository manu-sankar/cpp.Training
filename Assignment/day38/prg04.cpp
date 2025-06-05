#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main()
{
	deque<string>commands;
	string str = "";
	while (str != "exit")
	{
		getline(cin, str);
		if (str.find("RUN") != string::npos)
		{
			commands.push_back(str.substr(4));
			if (commands.size() > 4)
				commands.pop_front();
		}
		else if (str == "HISTORY")
		{
			for (string i : commands)
				cout << i << endl;
		}
	}
}