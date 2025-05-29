#include<iostream>
using namespace std;

class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle(string mk, string md):make(mk),model(md){}

	virtual void start()
	{
		cout << "PStarting the "<< make <<model << endl;
	}

	virtual void stop()
	{
		cout << "PStoping the " << make << model << endl;
	}
};

class Car :public Vehicle
{
private:
	int noOfDoors;
public:
	Car(string mk, string md, int nd):Vehicle(mk,md),noOfDoors(nd){}
	void start()
	{
		cout << "CStarting the " << make << model << endl;
	}
	void Honk()
	{
		cout << "Honking the horn of the" << make << model << endl;
	}
	void stop()
	{
		cout << "CStoping the " << make << model << endl;
	}
};

int main()
{
	Vehicle* vObjp;
	Vehicle vObj("Generic","Vehicle");
	vObj.start();
	vObj.stop();

	Car cObj("Toyota", "Camry", 2);
	vObjp = &cObj; 
	cObj.start();
	cObj.Honk();
	cObj.stop();
	vObjp->start();
	//vObjp->Honk();
	vObjp->stop();
}