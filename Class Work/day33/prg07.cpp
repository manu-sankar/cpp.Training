#include<iostream>
using namespace std;
int main()
{
	string err = "Manu";
	string dbyZeroErr = "Divide by Zero Error Occured";
	string nullptrErr = "memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try
	{
		/*if (n2 == 0)
			throw dbyZeroErr;*/
		/*if (ptr == nullptr)
			throw nullptrErr;*/
		int* arr = new int[99999999999999];
		if (arr == nullptr)
			throw arr;
	}
	catch (int e)
	{
		cout << "caught an exception: " << e << endl;
	}
	catch (const string e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	catch (bad_alloc& e)
	{
		cout << "Caught an exception: " << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << "error " << e.what() << endl;
	}
	return 0;
}