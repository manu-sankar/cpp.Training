#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	set<string>bannedWords = { "evil","bad","vulgar"};
	string text = "this is a bad example with evil words";
	size_t start = 0, end = 0;
	while (true)
	{
		end = text.find(' ', start);
		string word;
		string rslt;
		if (end == string::npos);
		{
			word = text.substr(start, end - start);
		}
		if (bannedWords.find(word) == bannedWords.end())
		{
			rslt = rslt + word + " ";
		}
		if (end == string::npos)
			break;
		start = end + 1;
		if (!rslt.empty())
		{
			rslt.pop_back();
		}
		cout << "New text " << end;
		cout << rslt;
		return 0;
	}
}
