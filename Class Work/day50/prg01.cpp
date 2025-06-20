#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class Person
{
protected:
	string name;
	string address;
	int phno;
public:
	Person(string name, string address, int phno):name(name),address(address),phno(phno){}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setAddr(string address)
	{
		this->address = address;
	}
	string getAddr()
	{
		return address;
	}
	void setPhno(int phno)
	{
		this->phno = phno;
	}
	int getPhno()
	{
		return phno;
	}
};



class Employee :public Person
{
protected:
	int e_id;
	float e_sal;
	int p_id;
public:
	
	Employee(int e_id, float e_sal, int p_id, string name, string address, int phno) :Person(name, address, phno), e_id(e_id), e_sal(e_sal), p_id(p_id) {}
	void setempId(int e_id)
	{
		this->e_id = e_id;
	}
	int getempId()
	{
		return e_id;
	}
	void setempsal(float e_sal)
	{
		this->e_sal = e_sal;
	}
	float getempsal()
	{
		return e_sal;
	}
	void setpid(int p_id)
	{
		this->p_id = p_id;
	}
};


class Admin:public Employee
{
protected:
	string username;
	string password;
	vector<Employee>users;
	
public:
	Admin(string username, string password,int e_id, float e_sal, int p_id, string name, string address, int phno):Employee(e_id,e_sal,p_id,name, address,phno)
	{
		this->username = "admin";
		this->password = "admin";
	}
	
	void adminLogin(string usrname, string pass)
	{
		string username, password;
		cout << "Enter Username: ";
		getline(cin, username);
		cout << "Enter Password: ";
		getline(cin, password);

		if (usrname == this->username && pass == this->password)
		{
			cout << "Login Succcessfull " << endl;
		}
		else
		{
			cout << "Incorrect Password " << endl;
		}
	}
	void createUsers()
	{
		for (auto user : users)
		{
			if (users.username == username)
			{
				cout << "User already exists " << endl;
			}
			else
			{
				users.push_back(users);
			}
		}
	}
};



