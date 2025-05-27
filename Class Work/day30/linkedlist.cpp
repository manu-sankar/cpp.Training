#include<iostream>
#include "linkedlist.h"

void LinkedList::addBeg(int data)
{
	Node* nn = new Node;
	nn->setData(data);
	if (head == nullptr)
	{
		head = nn;
		return;
	}
	else
	{
		nn->setNext(head);
		head = nn;
	}
}

void LinkedList::addEnd(int v) {

	//create new node
	Node* nn = new Node;
	nn->setData(v);

	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
		return;
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;
	}
}

void LinkedList::addMid(int v, int p)
{
	Node* nn = new Node;
	nn->setData(v);

	Node* temp = head;
	int count = 1;
	while (count != p - 1)
	{
		temp = temp->getNext();
		count++;
	}
	nn->setNext(temp->getNext());
	temp->setNext(nn);

}

void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->getData() << endl;
		temp = temp->getNext();
	}
}

void delNode(int t)
{

}