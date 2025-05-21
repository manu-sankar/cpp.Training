#include<iostream>
using namespace std;

class digClock
{
private:
	int hr;
	int min;
	int sec;
public:
	void setHr(int h)
	{
		hr = h;
	}
	int getHr()
	{
		return hr;
	}
	void setMin(int m)
	{
		min = m+1;
	}
	int getMin()
	{
		return min;
	}
	void setSec(int s)
	{
		sec = s;
	}
	int getSec()
	{
		return sec;
	}
	void tick()
	{
		sec++;
		if (sec == 60)
		{
			sec = 0;
			min++;
		}
		if (min == 60)
		{
			min = 0;
			hr++;
		}
		if (hr == 24)
		{
			hr = 0;
		}
	}
	void display()
	{
		cout << "Second " << sec << endl;
		cout << "Minute " << min << endl;
		cout << "Hour " << hr << endl;
	}
};

int main()
{
	digClock c;
	int s = 24;
	int m = 54;
	int hr = 14;
	c.setSec(s);
	c.setMin(m);
	c.setHr(hr);
	for (int i = 0; i < 7200; ++i)
	{
		c.tick();
		cout << endl;
		c.display();
		cout << endl;
	}
	return 0;
	
}
