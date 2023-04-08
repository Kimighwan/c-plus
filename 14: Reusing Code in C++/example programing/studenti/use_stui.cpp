#include <iostream>
#include "studenti.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student& st, int n);
const int pupils = 3;
const int quizzes = 5;

int main() {
	Student ada[pupils] = { Student(quizzes),Student(quizzes),Student(quizzes) };
	int i;
	for (i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	cout << "\n학생 리스트:\n";
	for (i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;
	cout << "\n시험 결과:";
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "평균: " << ada[i].Average() << endl;
	}
	cout << "프로그램을 종료합니다.\n";
}

void set(Student& st, int n) {
	cout << "학생의 이름을 입력하십시오: ";
	cin >> st;
	cout << n << "회에 걸친 시험 점수를 모두 입력하십시오:\n";
	for (int i = 0; i < n; i++)
		cin >> st[i];
	while (cin.get() != '\n')
		continue;
}
