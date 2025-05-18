#include<iostream>
using namespace std;


struct student {
	int rollno;
	string name;


}stud[10];


void sem1(int num1) {
	for (int i = 0;i < 5;i++) {

		switch (num1)
		{
		case 1:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tCOA:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tcomputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {



				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tCOA: " << hnd << endl;
				cout << endl;
				cout << "\t\t\tComputer: " << cse << endl;


				cout << endl;
				cout << endl;

				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Result:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;



				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade:" << "E";
				}
				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;


				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tCOA Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}

	}

}

void sem2(int num1) {
	for (int i = 0;i < 5;i++) {
		switch (num1)
		{
		case 2:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tOOPS:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tComputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






				cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
				cout << endl;
				cout << endl;

				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tOOPs: " << hnd << endl;
				cout << endl;

				cout << "\t\t\tComputer: " << cse << endl;

				cout << endl;
				cout << endl;


				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Marks:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade: E";
				}

				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;

				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tOOPS Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}
	}
}

void sem3(int num1) {
	for (int i = 0;i < 5;i++) {
		switch (num1)
		{
		case 3:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tDBMS:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tcomputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






				cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
				cout << endl;
				cout << endl;

				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tDBMS: " << hnd << endl;
				cout << endl;

				cout << "\t\t\tComputer: " << cse << endl;

				cout << endl;
				cout << endl;


				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Marks:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade: E";
				}

				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;

				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tDBMS Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}
	}
}

void sem4(int num1) {
	for (int i = 0;i < 5;i++) {
		switch (num1)
		{
		case 4:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tComputer Architecture:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tcomputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






				cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
				cout << endl;
				cout << endl;

				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tComputer Architecture: " << hnd << endl;
				cout << endl;

				cout << "\t\t\tComputer: " << cse << endl;

				cout << endl;
				cout << endl;


				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Marks:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade: E";
				}

				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;

				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tHComputer Architecture Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}
	}
}

void sem5(int num1) {
	for (int i = 0;i < 5;i++) {
		switch (num1)
		{
		case 5:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tHindi:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tcomputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






				cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
				cout << endl;
				cout << endl;

				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tHindi: " << hnd << endl;
				cout << endl;

				cout << "\t\t\tComputer: " << cse << endl;

				cout << endl;
				cout << endl;


				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Marks:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade: E";
				}

				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;

				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tHindi Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}
	}
}

void sem6(int num1) {
	for (int i = 0;i < 5;i++) {
		switch (num1)
		{
		case 6:
			int rollno;
			cout << "\t\t\tEnter Your RollNo:";
			cin >> stud[i].rollno;

			string name;
			cout << "\t\t\tEnter Your Name:";
			cin >> stud[i].name;

			cout << endl;

			cout << "\t\t\tEnter Your Mark(out of 100)" << endl;

			cout << endl;

			int eng;
			cout << "\t\t\tEnglish:";
			cin >> eng;

			cout << endl;

			int mat;
			cout << "\t\t\tMaths:";
			cin >> mat;

			cout << endl;

			int sci;
			cout << "\t\t\tScience:";
			cin >> sci;

			cout << endl;

			int hnd;
			cout << "\t\t\tHindi:";
			cin >> hnd;

			cout << endl;

			int cse;
			cout << "\t\t\tcomputer:";
			cin >> cse;

			cout << endl;
			cout << endl;

			if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






				cout << "\t\t\tRollNo:" << stud[i].rollno << '\t' << "NAME : " << stud[i].name << endl;
				cout << endl;
				cout << endl;

				cout << "\t\t\tEnglish: " << eng << endl;
				cout << endl;
				cout << "\t\t\tMaths: " << mat << endl;
				cout << endl;
				cout << "\t\t\tScience: " << sci << endl;
				cout << endl;
				cout << "\t\t\tHindi: " << hnd << endl;
				cout << endl;

				cout << "\t\t\tComputer: " << cse << endl;

				cout << endl;
				cout << endl;


				int tot = eng + mat + sci + hnd + cse;
				cout << "\t\t\tScored Marks:" << tot << endl;
				cout << endl;

				float Avg = tot / 5;
				cout << "\t\t\tScored Average:" << Avg << "%" << endl;
				cout << endl;

				if (tot >= 480) {
					cout << "\t\t\tGrade:" << "A+";
				}
				else if (tot >= 450) {
					cout << "\t\t\tGrade:" << "B+";
				}
				else if (tot >= 400) {
					cout << "\t\t\tGrade:" << "c+";
				}
				else if (tot >= 350) {
					cout << "\t\t\tGrade:" << "D+";
				}
				else {
					cout << "\t\t\tGrade: E";
				}

				cout << endl;

				cout << "\t\t\t=========================" << endl;
				cout << endl;

				if (eng < 35) {
					cout << "\t\t\tEnglish Failed" << endl;
				}
				if (mat < 35) {
					cout << "\t\t\tMaths Failed" << endl;
				}
				if (sci < 35) {
					cout << "\t\t\tScience Failed" << endl;
				}
				if (hnd < 35) {
					cout << "\t\t\tHindi Failed" << endl;
				}
				if (cse < 35) {
					cout << "\t\t\tComputer Science Failed" << endl;
				}
				if (eng > 35 & mat > 35 && sci > 35 && hnd > 35 && cse > 35) {
					cout << "\t\t\tYou Passed" << endl;
				}

			}
			else {
				cout << "\t\t\tInvalid Input";
			}

			cout << endl;
			cout << endl;
		}
	}
}



int main() {



	cout << "\t\t\t    Student Grading System" << endl;

	cout << endl;

	cout << "\t\t\tComputer Science and Engineering" << endl;

	cout << endl;

	int num1;

	cout << "\t\t\tSelect," << endl;
	cout << "\t\t\t1.Semester" << endl;
	cout << "\t\t\t2.Semester" << endl;
	cout << "\t\t\t3.Semester" << endl;
	cout << "\t\t\t4.Semester" << endl;
	cout << "\t\t\t5.Semester" << endl;
	cout << "\t\t\t6.Semester" << endl;
	cout << "\t\t\t";cin >> num1;

	sem1(num1);
	sem2(num1);
	sem3(num1);
	sem4(num1);
	sem5(num1);
	sem6(num1);
}