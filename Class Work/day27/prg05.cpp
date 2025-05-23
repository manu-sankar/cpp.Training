#include<iostream>
using namespace std;

class BankAccount
{
private:
	int accNo;
	static int accountCount;//static member variable
public:
	BankAccount()
	{
		accountCount++;
		accNo = accountCount;
	}
	static int getAccountCount()
	{
		int i = 10;
		return accountCount; //return accountCount+i+accNo -> This will produce error since static variables can only be accessed in static functions
	}
	void disp()
	{
		cout << "Account No " << accNo << endl;
	}
};

int BankAccount::accountCount = 1000;

int main()
{
	/*BankAccount a1, a2, a3;
	a1.disp();
	a2.disp();
	a3.disp();*/

	BankAccount* a = new BankAccount[5];

	for (int i = 0;i < 5;i++)
	{
		cout << "Customer [" << (i + 1) << "] ";
		//a->disp() // accnumber remains the same 
		a[i].disp();
	}
	cout << a->getAccountCount() << endl;
	return 0;
}
