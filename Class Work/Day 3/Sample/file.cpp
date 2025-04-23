/*#include<iostream>
using namespace std;
int main() {
		int itr1, itr2;
	char first_name[100] = { '\0' }, second_name[100] = { '\0' };
	for (int itr2 = 0; itr2 < 10;itr2++)
		cout << itr2 << endl;
	strcat(first_name, "Manu");
	cout << first_name << endl;
	for (int i = 0;i < 10;i++)
		cout << i << endl;
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
}*/


/*#include<iostream>
using namespace std;
int main() 
{
	const int val = 20;
	val = 10;
	return 0;
}*/
/*
#include<iostream>
using namespace std;
int* func(int v);
int main() {
	int* ptr = NULL;
	ptr = func(10);
	cout << *ptr << endl;
	*ptr = 201;
	cout << *ptr << endl;

	return 0;

}
int* func(int v) {
	static int r = 100;
	r = r + v;
	return &r;
}
*/

/*#include<iostream>
using namespace std;

void typeConImp();
void typeConExp();
int main() {
	typeConImp();
	typeConExp();
	return 0;

}
	void typeConImp() {
		double a = 10.5;
		int b = 5;
		double result = a + b + 6.8;
		cout << result << endl;
	}
void typeConExp() {
	int a = 5;
	int b = 3;
	float res = float(a) / float(b);
	cout << res << endl;
	
}*/

/*#include<iostream>
using namespace std;
int main(){
	int x[] = { 10,20,3,40,50 };
	cout << x[4] '\n' << x[3]'\n' << x[2]'\n' << x[1]'\n' << x[0]'\n';
}*/
