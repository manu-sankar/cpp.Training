#include<iostream>
using namespace std;

class myArray
{
private:
	int* arr;
	int size;
	int capacity;
public:
	myArray()
	{
		capacity = 1;
		size = 0;
		arr = new int[capacity];
	}
	int push_back(int);
	int biggest();
	bool sortAsc();
	bool sortDesc();
	void printArray();
	int getSize() const;
	int getCapacity() const;
	int resize();
};

int myArray::getCapacity() const
{
	return capacity;
}

int myArray::getSize() const
{
	return size;
}



void myArray::printArray()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

int myArray::push_back(int v)
{
	if (size == capacity)
	{
		cout << "Cap is equal to element when adding element" << v << endl;
		resize();
	}
	arr[size++] = v;
	return 0;
}



int myArray::resize()
{
	capacity = capacity * 2;
	int* newData = new int[capacity];
	//copy contents of earlier data to new data
	for (int i = 0;i < size;i++)
	{
		newData[i] = arr[i];
	}
	delete[] arr;
	arr = newData;
	return 0;

}

int main()
{
	myArray a;
	cout << "Size " << a.getSize() << "\t Capacity" << a.getCapacity() << endl;
	a.push_back(10);
	cout << "Size " << a.getSize() << "\t Capacity" << a.getCapacity() << endl;
	a.push_back(20);
	cout << "Size " << a.getSize() << "\t Capacity" << a.getCapacity() << endl;
	a.push_back(30);
}
