#include<iostream>
#include<cstdlib>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
};

class LList
{
private:
	Node* head;
public:
	LList()
	{
		head = nullptr;
	}

};