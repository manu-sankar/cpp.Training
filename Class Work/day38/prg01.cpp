#include<iostream>
#include<list>

using namespace std;

bool isOdd(int x)
{
	return x % 2 != 0;
}

int main()
{
	list<int>l1 = {10,20,30,40,50};
	l1.push_front(1);
	l1.push_back(60);
	l1.emplace_front(2);
	l1.emplace_back(70);
	l1.push_front(1);
	//l1.unique(1);
	for (auto i : l1)
		cout << i << " ";
	cout << endl;
	l1.remove_if(isOdd);
	for (int x : l1)
		cout << x << " ";

}