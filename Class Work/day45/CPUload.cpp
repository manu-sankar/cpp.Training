#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
#include<queue>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;
mutex mtx;

class Task
{
private:
	string name;;
	int load;
public:
	Task(string name, int load)
	{
		this->name = name;
		this->load = load;
	}
	void setName(string n)
	{
		n = name;
	}
	string getName()
	{
		return name;
	}
	void setLoad(int l)
	{
		l = load;
	}
	int getLoad()
	{
		return load;
	}
	void execute()
	{
		this_thread::sleep_for(chrono::seconds(load));
	}
};


class CPU
{
private:
	int cpucount;
	queue<Task>tasks;
public:
	int load()
	{
		ifstream inFile("input.txt");

		try
		{
			if (!inFile.is_open())
			{
				throw "File could not be opened";
			}
		}
		catch (string s)
		{
			cout << s << endl;
		}
		string line;
		getline(inFile, line);
		cpucount = stoi(line.substr(line.find(":") + 2));
		string name;
		int load;
		size_t pos;
		while (getline(inFile, line))
		{
			pos = line.find(':');
			name = line.substr(0, pos);
			pos = line.find('d');
			load = stoi(line.substr(pos + 2));
			tasks.emplace(Task(name, load));
		}
		return cpucount;
	}
	void execute(int n)
	{
		while (!tasks.empty())
		{
			mtx.lock();
			Task t = tasks.front();
			tasks.pop();
			cout << "CPU " << n << " picked Task " << t.getLoad() << " " << t.getName() << endl;
			mtx.unlock();
			t.execute();
			mtx.lock();
			cout << "CPU- " << n << "Finished Task " << t.getName() << endl;
			mtx.unlock();
		}
	}
};


int main()
{
	CPU c;
	int ret = c.load();
	vector<thread>str;
	//thread t1(ret);
	for (int i = 1;i <= ret;i++)
	{
		str.emplace_back(thread(&CPU::execute, &c, i));
	}
	for (int i = 0;i < ret;i++)
	{
		str[i].join();
	}
}
