#include<iostream>
#include<queue>

using namespace std;

struct Pages
{
	string name;
	int pages;
};

class Job
{
private:
	queue<Pages>pages;
public:
	void add(string username, int page)
	{
		while (true)
		{
			if (page > 10)
			{
				pages.push({ username, 10 });
				page = page - 10;
				
			}
			else
			{
				if (page != 0)
					pages.push({ username, page });

				break;
			}
		}
	}
	void execute()
	{

	}
};

int main()
{

}