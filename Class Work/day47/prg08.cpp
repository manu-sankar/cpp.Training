#include<iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	int area()
	{
		return length * breadth;
	}
};

int main()
{
	unique_ptr<Rectangle>P1(new Rectangle(10, 5));
	cout << P1->area() << endl;

	unique_ptr()
}