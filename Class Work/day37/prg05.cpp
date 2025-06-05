#include<iostream>
#include<vector>

using namespace std;

class Student
{
private:
	int id;
	string name;
public:
	Student(int id, string name):id(id),name(name){}
	void display()
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};


int main()
{
	Student s[3] = { {1,"Manu"},{2,"Newton"},{3,"Stroustrup"} };
	Student s1 = { 4,"Ambani" };
	Student s2 = { 5,"Jeff" };
	Student s3 = { 6,"Kishan" };

	try
	{

		for (auto e : s)
		{
			e.display();
		}

		vector<Student>emp;

		emp.push_back(s1);
		emp.push_back(s2);
		emp.push_back(s3);

		for (auto e : emp)
		{
			e.display();
		}
		cout << emp.capacity() << endl;
		cout << emp.size() << endl;

		emp.front().display();
		emp.back().display();

		//emp[10].display();//Error not caught by try catch: seg failure
		//emp.at(10).display();//error is caught by try catch

		emp.pop_back();
		emp.back().display();

		emp.insert(emp.end(), s4);
	}
	catch(exception& e){
		cout << "Error " << e.what() << endl;
		
	}
		return 0;
}