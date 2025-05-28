#include<iostream>
using namespace std;

class Vehicle
{
protected:
	float prices;
public:
	Vehicle(float p)
	{
		prices = p;
	}

	void vehDisp()
	{
		cout << "Price: " << prices << endl;
	}
};

class Car :protected Vehicle
{
protected:
	int seatCap;
	int noOfDoors;
	string Fueltype;
public:
	Car(int sc, int nd, string ft, float p) :Vehicle(p), seatCap(sc), noOfDoors(nd), Fueltype(ft) {}

	void carDisp()
	{
		cout << "Seating Capacity: " << seatCap << endl;
		cout << "No of Doors: " << noOfDoors << endl;
		cout << "Fuel Type: " << Fueltype << endl;
	}
};


class MotorCycle :public Vehicle
{
protected:
	int noOfCyl;
	int noOfGears;
	int noOfWheels;
public:
	MotorCycle(int nc, int ng,int nw, float p):Vehicle(p),noOfCyl(nc),noOfGears(ng), noOfWheels(nw){}

	void motorDisp()
	{
		cout << "No of Cylinders: " << noOfCyl << endl;
		cout << "No of Gears: " << noOfGears << endl;
		cout << "No of Wheels: " << noOfWheels << endl;
	}
};

class Audi :protected Car
{
protected:
	string modelType;
public:
	Audi(int sc, int nd, string ft, float p,string mt):Car(sc,nd,ft,p),modelType(mt){}
	void audiDisp()
	{
		vehDisp();
		carDisp();
		cout << "Model Type: " << modelType << endl;
	}
};

class Yamaha :protected MotorCycle
{
protected:
	string makeType;
public:
	Yamaha(int nc, int ng, int nw, float p,string t):MotorCycle(nc,ng,nw,p),makeType(t){}

	void yamahaDisp()
	{
		vehDisp();
		motorDisp();
		cout << "Make Type: " << makeType << endl;
	}
};

int main()
{
	Audi aObj(4, 4, "Petrol", 500000, "A4");
	aObj.audiDisp();
	cout << endl;
	cout << endl;
	Yamaha yObj(2, 5, 2, 200000, "1987");
	yObj.yamahaDisp();
}

