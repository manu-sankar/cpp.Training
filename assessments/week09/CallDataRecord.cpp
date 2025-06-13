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
	vector<User>users;
public:
	User(string name, int phoneno, string username, string password):name(name),phoneno(phoneno),username(username),password(password){}

	bool signup()
	{
		string name, phoneno, username, password;
		cout << "Enter Name: " << endl;
		cin >> name;
		cout << "Enter Phone Number: " << endl;
		cin >> phoneno;
		cout << "Enter Username: " << endl;
		cin >> username;
		cout << "Enter Password: " << endl;
		cin >> password;
		for (auto& user : users)
		{
			if (user.username==username)
			{
				cout << "User already exists " << endl;
				return false;
			}
			else
			{
				users.emplace_back(name, phoneno, username, password);
				cout << "Successfully signedup " << endl;
				return true;

			}
		}
	}

	/*bool checkPassword(string pass)
	{
		if (pass == password)
		{
			return true;
		}
		else
		{
			cout << "Incorrect Password ";
			return false;
		}
	}*/

	bool userlogin()
	{
		string username,password;
		cout << "Enter Username: " << endl;
		cin >> username;
		cout << "Enter Password: " << endl;
		cin >> password;
		for (auto& user : users)
		{
			if (user.username == username && user.password == password)
			{
				cout << "Successfully Logged in" << endl;
				return true;
			}
			else
			{
				cout << "Login unsuccessfull " << endl;
				return false;
			}
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
		cout << "1. Signup " << endl;
		cout << "2. Login " << endl;
		cout << "3. Exit " << endl;
		cout << "Enter your choice " << endl;
		int options;
		cin >> options;
		switch (options)
		{
		default:
			cout << "Invalid Options";
			break;
		case 1:
			signup();
			cout << "Signup " << endl;
			break;
		case 2:
			userlogin();
			cout << "Login " << endl;
			break;
		case 3:
			exit(0);
			break;
		}
	}
};

class CDR:public User
{
private:
	string fileName;
public:
	void ProcessCDR()
	{
		ifstream inFile("data.txt");
		try
		{
			if (inFile.is_open());
			{
				throw "File cannot be opened ";
			}
		}
		catch (string s)
		{
			cout << s << endl;
		}

		string line;
		while (getline(inFile, line))
		{
			vector<string>characters;
			
		}
	}


	void CDRdisp()
	{
		if (userlogin())
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
	}
};

class Operator
{
private:
	string msisdn;
	string brand;
	string mmc;
	string GPRS;
	int duration;
	string calltype;
	int incomingcallwithin=0;
	int incomingcalldiff=0;
	int outgoingcallwithin=0;
	int outgoingcalldiff=0;
	int smswithin = 0;
	int smsdiff = 0;
	string mbupload;
	string mbdownload;
	vector<Customer>customerdata;

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

