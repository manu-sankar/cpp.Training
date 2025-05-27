#include<iostream>
#include"Node.h"

void Node::setData(int v) {
	data = v;
}

int Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}

