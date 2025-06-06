#include<iostream>
#include<vector>
#include<set>
#include<fstream>
#include<string>
#include<unordered_map>
#include<set>


using namespace std;

//Logger
class Logger
{
private:
	ofstream outFile;
public:
	void writeInstr()
	{
		if (outFile.is_open())
		{
			try
			{
				if (outFile.is_open())
				{
					throw "File already opened";
				}
			}
			catch (string s)
			{
				cout << s << endl;
				exit(0);
			}
		}
	}
};

class Processor
{
private:
	vector<int>memory;
	unordered_map<string, int>registers;
	int prgcounter=0;
	int memoryaddr=0;
	bool isHalted = false;
public:


	Processor()
	{
		registers["AX"] = 0;
		registers["BX"] = 0;
		registers["CX"] = 0;
		registers["DX"] = 0;
	}
	
	//Load file
	void load()
	{
		vector<string>instr;
		ifstream fileIn;
		try
		{
			
			fileIn.open("instruction.txt");
			if (!fileIn.is_open())
			{
				throw("Failed to open");
			}
		}
		catch (string s)
		{
			cout << s << endl;
		}
		string line;
		while (getline(fileIn,line ))
		{
			if (!line.empty())
			{
				instr.push_back(line);
			}
		}
		
	}

	int getValue(const string& op)
	{
		if (op.empty() && op.front() == '[' && op.back() == ']')
		{
			int adr = stoi(op.substr(1, op.size() - 2));
			return memoryaddr;
		}
		else if (registers.count(op))
		{
			return registers[op];
		}
		else
		{
			return stoi(op);
		}
	}	
};

int setValue(const string& str, int val)
{

	return val;
}




