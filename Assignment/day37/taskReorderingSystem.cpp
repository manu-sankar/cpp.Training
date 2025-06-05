#include<iostream>
#include<list>
#include<string>
using namespace std;

list<string>tasks;
void addTask(const string& task)
{
	tasks.push_back(task);
}

void addUrgentTask(const string& task)
{
	if (task.find("urgent"))
	{
		tasks.push_front(task);
	}
	
}

void addTask(const string& task)
{
	tasks.push_back(task);
}

void removeTask(const string& task)
{
	tasks.remove(task);
}

void display()
{
	cout << "Tasks ";
	for (auto i : tasks)
	{
		cout << i << " ";
	}

}

int main()
{
	string commands;
	cout << "Add task " << endl;
	cout << "Urgent task " << endl;
	cout << "Remove task " << endl;
	cout << "Exit ";
	while (true)
	{
		cout << "Enter the command";
		cin >> commands;
		int options;
		cin >> options;
		switch (options)
		{
		default:
			break;
		case 1:
			if (commands == "add")
			{
				addTask(commands);
			}
			break;
		case 2:
			if (commands == "add")
			{
				addUrgentTask(commands);
			}
			break;
		case 3:
			
		}
	}
}


