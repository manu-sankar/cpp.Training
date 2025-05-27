#include<iostream>
using namespace std;

struct node
{
	int v;
	struct node* ptr;
};

int main()
{
	struct node n1, n2, n3;
	cout << sizeof(n1) << "\t Address of n1" << (unsigned long int)&n1 << endl;
	cout << sizeof(n2) << "\t Address of n2" << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\t Address of n3" << (unsigned long int) & n3 << endl;


	//step 2
	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;


	cout << "n1 value :" << n1.v << "\t ptr" << (unsigned long int)n1.ptr << endl;
	cout << "n2 value :" << n2.v << "\t ptr" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value :" << n3.v << "\t ptr" << (unsigned long int)n3.ptr << endl;


	//step 3 : make a relationship

	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "After making the relationship" << endl;

	cout << "n1 value: " << n1.v << "\t ptr" << (unsigned long int)n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\t ptr" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\t ptr" << (unsigned long int)n3.ptr << endl;
	cout << endl;
	

	//step 4 : Traversing in the list

	struct node* head = &n1;//n1=>BA of the list
	cout << n1.v << endl;
	cout << head->v << endl;
	cout << "Address of head->ptr " << (unsigned long int)head->ptr << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	/*
	//head = &n1;
	head = head->ptr;
	cout <<"Address of head->ptr: " <<(unsigned long int)head->v << endl;

	//head = &n2;
	head = head->ptr;
	cout<<n2,val<<endl;
	cout << head->v << endl;

	//head = &n3;
	head = head->ptr;
	cout << head->v << endl;
	*/

	//Here both statements are same
	cout << n1.v << endl;//
	cout << head->v << endl;


	head = &n2;
	cout << n2.v << endl;//20
	cout << head->v << endl;

	head = &n3;
	cout << n3.v << endl;//30
	cout << head->v << endl;

	struct node n4;

	n4.v = 40;
	n4.ptr = NULL;

	n1.ptr = &n4;
	n4.ptr = &n2;
	cout << endl;

	struct node n5;

	n5.v = 50;
	n5.ptr = NULL;

	n5.ptr = &n1;
	n1.ptr = &n5;
	//head = &n5;

	cout << endl;
	struct node n6;

	n6.v = 60;
	n6.ptr = NULL;

	n6.ptr = &n4;

	


	while (head != NULL)
	{
		cout << head->ptr << "=>";
		head =  head->ptr;
	}
	cout << "NULL" << endl;

	
	head = &n5;
	return 0;
}