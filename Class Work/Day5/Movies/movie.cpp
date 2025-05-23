#include<iostream>
using namespace std;
enum genre {
	Action=1,
	Comedy,
	Thriller,
	Mystery,
	Scifi
};
enum lang {
	English=1,
	Malayalam,
	Tamil,
	Hindi
};
int main() {
	int lang;
	char typeShow[20];
	int inputGenre;
	cout << "Enter the lang: ";
	cin >> lang;
	cout << "Enter the Genre: ";
	cin >> inputGenre;
	switch (lang)
	{
	case English:
		cout << "You choose English" <<endl;
		break;
	case Malayalam:
		cout << "You choose Malayalam" << endl;
		break;
	case Tamil:
		cout << "You choose Tamil" << endl;
		break;
	case Hindi:
		cout << "You choose Hindi" << endl;
		break;
	default:
		cout << "No language found" << endl;
		break;
	}
	
	switch (inputGenre)
	{
	case Action:
		cout << "Choosed Genre: Action" << endl;
		break;
	case Comedy:
		cout << "Choosed Genre: Comedy "<< endl;
		break;
	case Thriller:
		cout << "Choosed Genre: Thriller" << endl;
		break;
	case Mystery:
		cout << "Choosed Genre: Mystery" << endl;
		break;
	case Scifi:
		cout << "Choosed Genre: Scifi" << endl;
		break;
	default:
		cout << "No genre found";
		break;
	}

}