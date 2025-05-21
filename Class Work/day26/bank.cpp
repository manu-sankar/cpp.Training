#include<iostream>
using namespace std;

class ATMAccount
{
private:
	float balance=0;
	char accountHolder[20];
	float bal()
	{
		//balance = 0;
		return balance;
	}
	float dep(float d)
	{
		balance += d;
		return balance;
	}
	float withdraw(float w)
	{
		balance-=w;
		return balance;
	}

public:
	void setBal(float b)
	{
		balance = b;
	}
	float getBal()
	{
		return balance;
	}
	void setAccName(const char* n)
	{
		strcpy(accountHolder, n);
	}
	char* getAccName()
	{
		return accountHolder;
	}
	void display()
	{
		cout << "1. Balance " << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Exit" << endl;
		int options;
		cin >> options;
		switch (options)
		{
		case 1:
			cout << "Balance" << endl;
			cout << bal() << endl;;
			break;
		case 2:
			cout << "Deposit" << endl;
			float d;
			cin >> d;
			cout << dep(d) << endl;
			break;
		case 3:
			cout << "Withdraw" << endl;
			float w;
			cin >> w;
			cout << withdraw(w) << endl;
			break;
		case 4:
			exit(0);
			break;
		}
	}
};




int main()
{
	ATMAccount acc;
	acc.setAccName("Manu Sankar");
	acc.setBal(0);
	while(1){
		acc.display();
	}
}