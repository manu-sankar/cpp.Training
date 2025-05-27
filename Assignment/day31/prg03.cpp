#include<iostream>
using namespace std;

class Vehicle
{
protected:
	string vehicleId;
	string type;
	float ratePerKm;
public:
	Vehicle(string vehicleId, string type, float ratePerKm)
	{
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm=ratePerKm;
	}
};


class Car :public Vehicle
{
private:
	int distance;
	int noOfDays;
public:
	Car(string vehicleId, string type, float ratePerKm,int distance, int noOfDays):Vehicle(vehicleId, type, ratePerKm)
	{
		this->distance = distance;
		this->noOfDays = noOfDays;
	}



	void calculateFare()
	{
		int amtDist = distance * ratePerKm;
		cout <<"Fare without discount: " << amtDist << endl;
		if(distance>2){
			float distAmt = (amtDist * 10) / 100;
			float amtLongDist = amtDist - distAmt;
			cout <<"Fare with long-term discount: " << amtLongDist << endl;
		}
	}
};


class Bike :public Vehicle
{
private:
	int dist;
	int noOfDays;
public:
	Bike(string vehicleId, string type, float ratePerKm, int dist, int noOfDays) :Vehicle(vehicleId, type, ratePerKm)
	{
		this->dist = dist;
		this->noOfDays = noOfDays;
	}
	void calculateFare()
	{
		int amtDist = dist * ratePerKm;
		cout << "Fare without discount: " << amtDist << endl;
		if (dist > 2) {
			float distAmt = (amtDist * 10) / 100;
			float amtLongDist = amtDist - distAmt;
			cout << "Fare with long-term discount: " << amtLongDist << endl;
	}
};

int main()
{
	Car cObj("C100", "Car", 15, 100, 3);
	cObj.calculateFare();

	
}


