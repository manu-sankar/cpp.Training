#include<iostream>
using namespace std;

class Nums
{
protected:
	int x, y;
public:
	void setVal(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};

class Multiplier: public Nums
{
private:
	int prod;
public:
	void setVal()
	{
		cout << "Enter x and y" << endl;
		cin >> x >> y;
	}
	int multiply()
	{
		prod = x * y;
		return prod;
	}
};


int main()
{
	Multiplier objM;
	objM.setVal();
	cout<<objM.multiply();
}