#include<iostream>
using namespace std;

class Luggage
{
private:
	string PassengerName;
	float weight;
	int limit;
public:
	Luggage(string name, float wei)
	{
		PassengerName = name;
		weight = wei;
		limit = 20;
	}

	void checkOverWeight()
	{
		if (weight<1)
		{
			cout << "Invalid" << endl;
		}
		else if (weight >= 1 && weight <= 20)
		{
			cout << "Luggage within limit" << endl;
		}
		else if (weight > 20)
		{
			int lim = weight - limit;
			cout << "Luggage overweight by " << lim << endl;
		}
	}


};

int main()
{
	Luggage l1("Rita", 18);
	l1.checkOverWeight();
	Luggage l2("Sam", 25);
	l2.checkOverWeight();
}