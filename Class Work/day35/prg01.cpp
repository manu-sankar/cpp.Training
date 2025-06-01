#include<iostream>
using namespace std;

class myArray
{
	int* data;
	int size;
public:
	myArray(int val)
	{
		data = new int(val);
		//size = val;
	}

	void setVal(int val)
	{
		*data = val;
	}

	int getVal()
	{
		return *data;
	}

	myArray(const myArray& fObj)
	{
		cout << "Copy constructor got called " << endl;
		data = new int(*fObj.data);
	}

	void display()
	{
		cout << "Address of data: " << data << endl;
		cout << '\t' << *data << endl;
	}

	myArray operator +(const myArray& fObj)
	{
		return myArray(*data + *fObj.data + 100);
	}

	myArray& operator++()
	{
		++*data;
		return *this;
	}

	myArray& operator++(int)
	{
		int temp = *data;
		temp++;
		*data = temp;
		return *this;
	}

	friend ostream& operator <<(ostream& os, const myArray& fObj)
	{
		os << "Data: " << *fObj.data << endl;
		return os;
	}

	~myArray()
	{
		delete data;
	}
};


int main()
{
	myArray a1(10);
	a1.display();

	//myArray a2(a1); same as below
	myArray a2 = a1;
	a2.display();

	a2.setVal(20);
	a1.display();
	a2.display();

	myArray a3 = a1 + a2;
	a3.display();

	++a3;
	a3.display();  //131

	a3++;
	a3.display();
	
	cout << a3;

	return 0;
}