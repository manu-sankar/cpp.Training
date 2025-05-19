#include<iostream>
#include<string>
using namespace std;

typedef struct question {
	int id;
	string question;
	string option1;
	string option2;
	string option3;
	int crctOpt;
} quest; 

typedef struct calc {
	int id;
	float marks;
}mark;


quest question1 = { 1, "Who invented C++ ? ", "Bjarne Stroustrup", "Charles Babbage", "Andrew Koenig", 1};
quest question2 = { 2, "Choose the correct default return value of function.", "void", "int", "float", 2};
quest question3 = { 3,"Which of the following is used for comments in C++ ? ", "/* comment */", " // comment ", " both // comment or /* comment */ ", 3 };
quest questions[5] = { question1, question2, question3 };

int qcount = 3;
int crt = 0;
void display();
int dispQuestion();
float calcu(int);


void display() {
	cout << "Press 1: Start Quiz" << endl;
	cout << "Press 2: Calculate Marks" << endl;
	cout << "Press 3: Exit" << endl;
	int select;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "Start Quiz" << endl;
		crt = dispQuestion();
		cout << endl;
		break;
	case 2:{
		cout << "Calculate Marks" << endl;
		int tot = calcu(crt);
		cout << "Score: " << tot << endl;
		cout << endl;
		break;
	}
	case 3:
		cout << "Exit" << endl;
		exit(0);
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
}

int dispQuestion(){
	int ans;
	int crct = 0;
	for (int i = 0;i < qcount;i++) {
		cout << questions[i].question << endl;
		cout << questions[i].option1 << endl;
		cout << questions[i].option2 << endl;
		cout << questions[i].option3 << endl;
		cin >> ans;
		if (ans == questions[i].crctOpt) {
			crct++;
		}
	}
	return crct;
}

// (float) tot

float calcu(int crct) {
	float tot = (float(crct) / qcount) * 100;
	cout << "Final: " << tot << endl;
	return tot;
}

int main() {
	while(1){
		display();
	}
	return 0;
}