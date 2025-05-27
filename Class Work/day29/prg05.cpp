#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE;

	

	NODE* createNode(int);
	NODE* addNodeBeg();
	void addNodeEnd();
	void delNodeBeg();
	void display();

	NODE* createNode(int data)
	{
		NODE* nn = NULL;
		nn = (NODE*)malloc(sizeof(NODE*));
		nn->data = data;
		nn->next = NULL;
	}

	NODE* addNodeBeg(NODE* head, NODE* nn)
	{
		if (head == NULL)
		{
			head = nn;
			return head;
		}
		while (head->next != NULL)
		{
			head = head->next;
			head = NULL;
		}

	}


void disp()
{
	cout << "Add Node Beginning" << endl;
	cout << "Add Node Eng " << endl;
	cout << "Display list " << endl;
	cout << "Exit " << endl;
	int options;
	cin >> options;
	switch (options)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
}