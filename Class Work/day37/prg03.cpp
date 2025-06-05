#include<iostream>
#include<initializer_list>

using namespace std;

template<typename T, size_t N>

class myArray
{
private:
	T* arr;
public:
	myArray(initializer_list<T> list)
	{
		if (list.size() > N)
			throw length_error("Too many arguments");
		this->arr = new T[N];
		int i = 0;
		for (const T& val : list)
		{
			arr[i++] = val;
			cout << "Array " << val << endl;
		}
		for (;i < N;i++)
			arr[i] = T{};
		cout << N << endl;
	}

	void display()
	{
		for (int i = 0;i < N;i++)
			std::cout << arr[i] << std::endl;
	}
};

int main()
{
	try
	{
		myArray<int, 5>arr = { 1,2,3 };
		arr.display();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	
}