#include<iostream>
#include<thread>
#include<unordered_map>
#include<map>
#include<mutex>
#include<chrono>

using namespace std;

class User
{
protected:
	string name;
	string username;
	string password;
public:
	virtual void disp() = 0;
	User(string name, string username, string password)
	{
		this->name = name;
		this->username = username;
		this->password = password;
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
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
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
};

class Bid
{
private:
	float bidamt;
	chrono::time_point<chrono::steady_clock>bidtime;
public:
	Bid(float bidamt, chrono::time_point<chrono::steady_clock>bidtime)
	{
		this->bidamt = bidamt;
		this->bidtime = bidtime;
	}
	float getbidamt()
	{
		return bidamt;
	}
	chrono::time_point<chrono::steady_clock>bidtime()
	{
		return bidtime;
	}
};

class Buyer:public User
{
private:
	unordered_map<string, Bid>buyerbid;
public:
	Buyer(string name, string username, string password):User(name,username,password){}
	void addBid(string itemName,float bidamt)
	{
		Bid b(bidamt, chrono::system_clock::now());
		buyerbid.insert({ itemName,b });
	}
	void disp()
	{
		cout << "ItemName: " << name << endl;
		cout << "UserName: " << username << endl;
		for (auto &i : buyerbid)
		{
			cout << i.first << " " << i.second.getbidamt() << " "<<i.second.bidtime() << endl;
		}
		
	}
};