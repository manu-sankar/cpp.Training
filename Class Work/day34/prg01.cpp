#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


struct Employee
{
	int id;
	char name[20];
};

class Student
{
private:
	int id;
	char name[20];
public:
	Student()
	{
		id = 0;
		strcpy(name, "");
	}
	Student(int id, const char* name)
	{
		this->id = id;
		strcpy(this->name,name);
	}

	void setValues(int id, const char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}

	void disp()
	{
		cout << "ID :" << id;
		cout << "Name: " << name;
	}
};



int main()
{
	fstream fIO;
	struct Employee e = { 101,"Manu" };
	Student s(1, "Kishan");
	fIO.open("Test.txt", ios::in| ios::out | ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error : opening the file " << endl;
	}

	//fIO.write((char*)&e, sizeof(e));


	fIO.write((char*)&s, sizeof(s));
	fIO.close();

	////////////////////////////
	fIO.open("Test.txt", ios::in | ios::out | ios::binary);
	if (!fIO.is_open())
	{
		cerr << "Error : opening the file " << endl;
	}

	//fIO.write((char*)&e, sizeof(e));

	Student s1;
	fIO.read((char*)&s1, sizeof(s1));
	s1.disp();
	fIO.close();

	/*struct Employee e1;
	fIO.read((char*)&e1, sizeof(e1));
	cout << e1.id << '\t' << e1.name << endl;*/

	return 0;
}