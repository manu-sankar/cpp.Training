#include<iostream>
#define MAX 5
using namespace std;

class StackOp
{
private:
	int arr[MAX];
	int top;
	int bottom;

public:
	StackOp()
	{
		top = -1;
		bottom = -1;
	}
	void addEle(int v)
	{
		if (top == MAX-1)
		{
			cout << "Stack is full " << endl;;
		}
		else{
			top++;
			arr[top] = v;
		}
	}

	void delEle()
	{
		if (top == bottom)
		{
			cout << "Stack is empty" << endl;
		}
		top--;
	}

	void disp()
	{
		if (top == bottom)
		{
			cout << "Stack is empty" << endl;
		}
		else{
			cout << "Elements are " << endl;
			for (int i = top;i >= 0;i--)
			{
				cout << arr[i] << endl;
			}
		}
	}
};

int main()
{
	StackOp so;
	so.addEle(10);
	so.addEle(20);
	so.addEle(30);
	so.addEle(40);
	so.addEle(50);
	so.addEle(60);
	so.disp();
	so.delEle();
	/*so.delEle();
	so.delEle();
	so.delEle();*/
	so.disp();
}