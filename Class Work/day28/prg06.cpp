#include<iostream>
using namespace std;

class DeliveryTip
{
private:
	string OrderID;
	float BillAmount;
	float Distance;
	float tip;
public:
	DeliveryTip(string ord, float bill, float dist)
	{
		OrderID = ord;
		BillAmount = bill;
		Distance = dist;
	}
	void calculateTip()
	{
		if (Distance < 5 && Distance >= 1)
		{
			tip = (BillAmount * 5) / 100;
		}
		else if (Distance > 5 && Distance <= 10)
		{
			tip = (BillAmount * 10) / 100;
		}
		else if (Distance > 10)
		{
			tip = (BillAmount * 15) / 100;
		}
	}

	void printDetails()
	{
		cout << "Order " << OrderID << " | " << "Tip: " << tip;
	}
};

int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();
}