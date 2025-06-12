#include<iostream>
#include<stack>
#include<sstream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	stack<string>backStack;
	stack<string>forwardStack;
	string curr="home";
	string command;
	while (true)
	{
		getline(cin, command);
		if (command.substr(0,5) == "visit")
		{
			stringstream ss;
			string s1, s2;
			ss >> s1 >> s2;
			backStack.push(curr);
			curr = s2;
		}
		else if (command == "back")
		{
			if (backStack.empty())
			{
				cout << "Can't go back" << endl;
			}
			else
			{
				forwardStack.push(curr);
				curr = backStack.top();
				backStack.pop();
			}
		}
		else if (command == "forward")
		{
			if (forwardStack.empty())
			{
				cout << "Can't go forward" << endl;
			}
			else
			{
				backStack.push(curr);
				curr = forwardStack.top();
				forwardStack.pop();
			}
		}
		else if (command == "status")
		{
			cout << "Current: " << curr << endl;
			if (!backStack.empty())
			{
				cout << "Back Stack " << backStack.top();
			}
			else if (!forwardStack.empty())
			{
				cout << "Forward Stack " << forwardStack.top();
			}
			else
			{
				cout << "Invalid ";
			}
		}
		else if(command == "exit")
		{
			cout << "break";
			break;
		}
	}
}