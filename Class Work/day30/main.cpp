#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	l2.addBeg(10);
	l2.addEnd(30);
	l2.addEnd(20);
	l2.addBeg(40);
	l2.addMid(70, 3);
	l2.display();

	return 0;
}