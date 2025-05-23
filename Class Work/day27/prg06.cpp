#include<iostream>
using namespace std;

class BankAccount
{
private:
	double balance;
public:
	BankAccount(double initialBalance)
	{
		balance = initialBalance;
	}

	double getBalance() const
	{
		return balance+1500;
	}

	void deposit(double amount)
	{
		balance += amount;
	}
};
int main()
{

	return 0;
}
