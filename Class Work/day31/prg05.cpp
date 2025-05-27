#include<iostream>
using namespace std;

class Vehicle
{
protected:
	int cap;
	string type;
	string YOM;
	string colour;
public:
	
	Vehicle(int cap,string type, string YOM, string colour)
	{
		this->cap = cap;
		this->colour = colour;
		this->type = type;
		this->YOM = YOM;
	}


	void disp()
	{
		cout << cap << endl;
		cout << colour << endl;
		cout << type << endl;
		cout << YOM << endl;
	}
};

class Car :public Vehicle
{
private:
	int doors;
	string model;
	string engineType;
	string variant;
public:
	
	Car(int doors, string engineType, string variant, string model):Vehicle(cap, type, YOM, colour)
	{
		this->doors = doors;
		this->engineType = engineType;
		this->variant = variant;
		this->model = model;
	}
	void disp()
	{
		cout << doors;
		cout << engineType;
		cout << variant;
		cout << model;
	}
};


int main()
{
	Car objC(4,"AJHsdj","SUV","A3");
	objC.disp();
}