#include<iostream>
using namespace std;

class Test
{
private:
	int v;
public:
	Test()
	{
		v = 0;
	}
	Test(int val)
	{
		val = v;
	}
	void setV(int val)
	{
		v = val;
	}
	int getV()
	{
		return v;
	}
};

int main()
{
	Test t1;
	cout << t1.getV() << endl;
	t1.setV(10);
	cout << t1.getV() << endl;
}

