#include<iostream>
#include<exception>

using namespace std;

class BadLengthException
{
protected:
	int n;
public:
	BadLengthException(int n)
	{
		this->n = n;
	}

	int what()
	{
		return n;
	}
};

bool checkUserName(string username)
{
	bool isValid = true;
	int n = username.length();

	if (n < 5)
	{
		throw  BadLengthException(n);
	}
	for (int i = 0;i < n;i++)
	{
		if (username[i] == 'w' && username[i + 1] == 'w')
		{
			isValid = false;
		}
		return isValid;
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string username;
		cin >> username;
		try
		{
			bool isValid = checkUserName(username);
			if (isValid)
			{
				cout << "Valid" << endl;
			}
			else
			{
				cout << "Invalid";
			}
		}
		catch (BadLengthException e)
		{
			cout << "Too short " << e.what() << endl;
		}
	}
	return 0;
}