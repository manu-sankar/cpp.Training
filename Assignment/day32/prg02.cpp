#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void makeSound()
	{
		cout << "Animal makes a sound " << endl;
	}
};


class Dog : public Animal
{
public:
	void makeSound()
	{
		cout << "Dog barks" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound()
	{
		cout << "Cat meows" << endl;
	}
};

int main()
{
	
	Animal* panimal1;
	panimal1 = new Cat;
	panimal1->makeSound();


	Animal* panimal2;
	panimal2 = new Dog;
	panimal2->makeSound();




}