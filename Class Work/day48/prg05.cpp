#include<iostream>
using namespace std;

class BankAccount
{
private:
	int accountNumber;
	string accountHolderName;
	float balance;
public:

	BankAccount(int accountNumber, string accountHolderName, float balance)
	{
		this->accountNumber = accountNumber;
		this->accountHolderName = accountHolderName;
		this->balance = balance;
	}

	BankAccount():accountNumber(0),accountHolderName(" "),balance(0) {}

	void setBalance(float bal)
	{
		balance = bal;
	}
	float getBalance()
	{
		return balance;
	}
	void setAccNO(int accno)
	{
		accountNumber = accno;
	}
	int getAccNo()
	{
		return accountNumber;
	}
	void setAccName(string name)
	{
		accountHolderName = name;
	}
	string getAccName()
	{
		return accountHolderName;
	}

	void deposit(float amt)
	{
		if (amt > 0)
		{
			balance += amt;
			cout << "Deposited Amount is " << amt << endl;
		}
		else
		{
			cout << "Incorrect balance " << endl;
		}
	}

	float balamt()
	{
		cout << balance << endl;
		return balance;
	}

	void withdraw(int amt)
	{
		if (amt > 0 && amt <= balance)
		{
			balance -= amt;
		}
		else
		{
			cout << "You cannot withdraw " << endl;
		}
	}
};

int main()
{
	BankAccount ba(234,"Manu",900);

	while (1)
	{
		cout << "1. Deposit " << endl;
		cout << "2.Withdraw " << endl;
		cout << "3.Balance " << endl;
		cout << "4.Exit " << endl;
		int options;
		cin >> options;
		float amt;

		switch (options)
		{
		default:
			break;
		case 1:
			cout << "Enter amount " << endl;
			cin >> amt;
			ba.deposit(amt);
			break;
		case 2:
			cout << "See balance " << endl;
			ba.getBalance();
			break;
		case 3:
			cout << "Enter withdraw amount " << endl;
			cin >> amt;
			ba.withdraw(amt);
			break;
		case 4:
			cout << "Exit";
			exit(0);
			break;
		}
	}
	return 0;
}