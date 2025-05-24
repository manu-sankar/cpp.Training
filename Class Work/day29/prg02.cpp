#include<iostream>
#define MAX 5
using namespace std;

class QueueOp
{
private:
	int arr[MAX];
	int rear = 0;
	int front = 0;
public:
	int enqueue(int v)
	{
		if (rear == MAX - 1)
		{
			cout << "Queue is empty";
			return EXIT_SUCCESS;
		}
		arr[rear] = v;
		rear++;
	}

	int dequeue()
	{
		if (rear == front)
		{
			cout << "Queue is empty";
			rear = 0;
			front = 0;
			return EXIT_SUCCESS;
		}
		cout << arr[front] << " got deleted"<<'\t';
		front++;
	}

	void display()
	{
		cout << "Queue elements are " << endl;
		for (int i = front;i < rear;i++)
		{
			cout << arr[i] << '\t';
		}
		cout << endl;
	}
};

int main()
{
	QueueOp qo;
	qo.enqueue(20);
	qo.enqueue(30);
	qo.enqueue(40);
	qo.enqueue(50);
	qo.enqueue(60);
	qo.display();
	qo.dequeue();
	qo.dequeue();
	qo.dequeue();

}