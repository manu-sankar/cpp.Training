#include<iostream>
using namespace std;

class Animal
{
public:
	void eat()
	{
		cout << "Eat " << endl;
		
	}
	void walk()
	{
		cout << "Walk " << endl;

	}
	void makeasound()
	{
		cout << "Make sound " << endl;

	}
	void soundLike()
	{
		cout << "soundLike " << endl;

	}
};


class cat :public Animal
{
public:
	
	void dispCat()
	{
		cout << "Cat " << endl;
	}
	void soundLike()
	{
		cout << "Meow " << endl;
	}
};

class dog :public Animal
{
public:

};