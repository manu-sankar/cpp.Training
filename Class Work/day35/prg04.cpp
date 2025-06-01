#include<iostream>
#include<chrono>
using namespace std;

int main()
{
	auto start = chrono::high_resolution_clock::now();

	for (int i = 0;i < 1000000;i++)
	{
		//simulating some work
	}

	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast <chrono::microseconds>(end - start);
	cout << "Execution start " << duration.count() << "Microseconds\n";

}