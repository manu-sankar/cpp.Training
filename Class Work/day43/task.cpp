#include  <iostream>
#include <queue>

using namespace std;

struct task
{
	string description;
	int priority;

	bool operator >(const task& a)const
	{
		return  this->priority > a.priority;
	}

	bool operator <(const task& a)const
	{
		return this->priority < a.priority;
	}

};

class taskSheduler
{
	priority_queue<task> jobs;
public:
	bool add(string description, int priority)
	{
		jobs.push({ description , priority });
		return true;
	}
	bool execute()
	{
		if (jobs.empty())
			return false;
		cout << "excuting -> " << jobs.top().description << " - " << jobs.top().priority << endl;
		jobs.pop();
		return true;
	}
};


int main()
{
	taskSheduler jobs;

	jobs.add("User1", 2);
	jobs.add("User2", 4);


	while (jobs.execute());
}