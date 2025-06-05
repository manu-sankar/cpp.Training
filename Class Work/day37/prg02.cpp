#include<iostream>
#include <initializer_list>

using namespace std;
template<typename T,size_t N>
class myArray
{
private:
	T* arr[N];
public:
	myArray(initializer_list<T> list)
	{
		if (list.size > 0)
			throw length_error "Too many arguments";
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
	T& operator[](size_t index)
	{
		return arr[index];
	}
	T& front()
	{
		return arr[0];
	}
	T& back()
	{
		return arr[N - 1];
	}
	T& data()
	{
		return arr;
	}
	T& 
};

int main()
{
	try
	{
		myArray<int, 5>arr = { 1,2,3,4,5 };
		arr.disp();
	}
}

