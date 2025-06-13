#include<iostream>
#include<thread>
#include<chrono>
#include<string>
#include<vector>
#include<fstream>
#include<mutex>


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
	string mmc;
	string brand;
	vector<int>incomingcalls;
	vector<int>outgoingcalls;
	int smsreceivecount;
	int smssendcount;
	int mbupload;
	int mbdownload;
public:
	Operator(string mmc, string brand):mmc(mmc),brand(brand)
	{
		smsreceivecount = 0;
		smssendcount = 0;
		mbupload = 0;
		mbdownload = 0;
	}

	void incomingCall(int duration)
	{
		incomingcalls.push_back(duration);
	}
	void outgoingCall(int duration)
	{
		outgoingcalls.push_back(duration);
	}
	void smsSend()
	{
		smssendcount++;
	}
	void smsReceive()
	{
		smsreceivecount++;
	}
	void mbUpload()
	{
		mbupload++;
	}
	void mbDownload()
	{
		mbdownload++;
	}

	

	void operatorBilling()
	{
		cout<<""
	}
};

class Customer: public User
{
private:
	int customerID;
	string msisdn;
	vector<int>incomingcallwithinoperator;
	vector<int>incomingcalldiffoperator;
	vector<int>outgoingcallwithinoperator;
	vector<int>outgoingcalldiffoperator;
	vector<string>MBUpload;
	vector<string>MBDownload;
public:
	void getCustomerSame(string msisdn)
	{
		for (auto& c : incomingcallwithinoperator)
		{
			if (c.msisdn == msisdn)
			{

			}
		}
	}

	void custDisp()
	{

	}
};

int main()
{
	User 

}

