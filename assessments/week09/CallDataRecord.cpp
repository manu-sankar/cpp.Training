#include<iostream>
#include<thread>
#include<chrono>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class User
{
protected:
	string name;
	int phoneno;
	string username;
	string password;
public:
	User(string name, int phoneno, string username, string password):name(name),phoneno(phoneno),username(username),password(password){}

	bool signup()
	{

	}

	bool checkPassword(string pass)
	{
		if (pass == password)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool userlogin(string username, string password)
	{
		if (username == password)
		{
			cout << "Successfully Logged in ";
			return true;
		}
		else
		{
			return false;
		}
	}

	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setPhoneNumber()
	{
		this->phoneno = phoneno;
	}
	int getPhoneNumber()
	{
		return phoneno;
	}
	void setUserName(string username)
	{
		this->username = username;
	}
	string getUserName()
	{
		return username;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	string getPassword()
	{
		return password;
	}
	void display()
	{
		cout << "Signup " << endl;
		cout << "Login " << endl;
		cout << "Exit " << endl;
		cout << "Enter your choice " << endl;
		int options;
		cin >> options;
		switch (options)
		{
		default:
			cout << "Invalid Options";
			break;
		case 1:
			cout << "Signup " << endl;
			break;
		case 2:
		{
			string username, password;
			userlogin(username, password);
			cout << "Login " << endl;
			break;
		}
			
		case 3:
			exit(0);
			break;
		}
	}
};

class CDR
{
private:
	
	string fileName;
public:
	void incoming(bool isDiff)
	{
		if()
	}

	void CDRdisp()
	{
		cout << "Process CDR File " << endl;
		cout << "Print/Search for Billing Process " << endl;
		cout << "Logout " << endl;
		cout << "Enter your choice " << endl;
		int options;
		cin >> options;
		switch (options)
		{
		default:
			break;
		case 1:
			cout << "Process CDR File " << endl;
			break;
		case 2:
			cout << "Print/Search for Billing Process " << endl;
			break;
		case 3:
			cout << "Logout " << endl;
			break;
		}
	}
	
};

class Operator
{
private:
	int MSISDN;

};

class Customer: public User
{
private:
	int customerID;
	vector<int>incomingcallwithinoperator;
	vector<int>incomingcalldiffoperator;
	vector<int>outgoingcallwithinoperator;
	vector<int>outgoingcalldiffoperator;
	vector<string>MBUpload;
	vector<string>MBDownload;
public:
	void dispCustomer()
	{
		cout << "Customer ID: " << customerID << endl;
	}
};

