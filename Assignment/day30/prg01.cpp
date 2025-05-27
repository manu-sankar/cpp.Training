#include<iostream>
using namespace std;

class Employee
{
private:
	int id;
	string name;
	float salary;
	Employee* next;
public:
	void setId(int);
	int getId();
	void setName(string);
	string getName();
	void setSal(float);
	float getSal();
	void setNext(Employee*);
	Employee* getNext();
};



class LinkedList
{
private:
	Employee* head;
public:
	LinkedList();
	void addEmpBeg(int, string, float);
	void addEmpEnd(int, string, float);
	void disp();
	void delEmp(int);
	void searchEmp(int);
	void updateEmp(int);
	
};

void Employee::setId(int i)
{
	id = i;
}

int Employee::getId()
{
	return id;
}

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setSal(float s)
{
	salary = s;
}

float Employee::getSal()
{
	return salary;
}

void Employee:: setNext(Employee* ne)
{
	next = ne;
}

Employee* Employee::getNext()
{
	return next;
}

LinkedList::LinkedList()
{
	head = nullptr;
}

void LinkedList::addEmpBeg(int i, string n, float s)
{
	Employee* ne = new Employee;
	ne->setId(i);
	ne->setName(n);
	ne->setSal(s);
	

	if (head == nullptr)
	{
		head = ne;
		return;
	}
	else
	{
		ne->setNext(head);
		head = ne;
	}
}


void LinkedList::addEmpEnd(int i, string n, float s)
{
	Employee* ne = new Employee;
	ne->setId(i);
	ne->setName(n);
	ne->setSal(s);
	if (head == nullptr)
	{
		head = ne;
		return;
	}
	else
	{
		Employee* temp = head;
		while (temp->getNext() != nullptr)
		{
			temp = temp->getNext();
		}
		temp->setNext(ne);
	}
}



void LinkedList::delEmp(int t)
{
	Employee* ptr1 = head;
	Employee* ptr2 = nullptr;
	while (ptr1 !=nullptr)
	{
		
		if (ptr1->getId() == t)
		{
			break;
		}
		ptr2 = ptr1;
		ptr1 = ptr1->getNext();
	}

	if (ptr1)
	{
		return;
	}

	ptr2->setNext(ptr1->getNext());
	delete ptr1;
}

void LinkedList::disp()
{
	Employee* temp = head;
	while (temp != nullptr)
	{
		cout << temp->getId() << endl;
		cout << temp->getName() << endl;
		cout << temp->getSal() << endl;
		temp = temp->getNext();
	}
}

 


int main()
{
	LinkedList l1;
	l1.addEmpBeg(1, "Manu", 20000);
	l1.addEmpEnd(2, "Kishan", 25000);
	l1.disp();
	l1.delEmp(1);
	l1.disp();
}