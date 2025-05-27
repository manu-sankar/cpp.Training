#pragma once

#include<iostream>
#include "node.h"
using namespace std;


class LinkedList {
private:
	Node* head;
public:
	LinkedList() {

		head = nullptr;
	}
	//LinkedList(int) {}

	void addBeg(int);
	void addEnd(int);
	void addMid(int, int);
	void delNode(int);
	void display();
};


