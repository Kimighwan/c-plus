#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n); // 데이터를 요구하여 배열에 저장, 배열이 다 찼거나, 학생 이름에 빈 줄이 입력되면 종료, 배열에 채워진 원소 수를 리턴한다.
void display1(student st); //구조체 내용 출력
void display2(const student *ps); // 구조체 내용 출력
void display3(const student pa[], int n); // 구조체 내용 출력
int main() {
	cout << "학급의 학생 수를 입력하십시오: ";
	int  class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
		cout << endl;
	}
	display3(ptr_stu, entered);
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

int getinfo(student pa[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "학생 #" << i + 1 << "\n이름: ";
		cin.getline(pa[i].fullname, SLEN);
		if (strcmp(pa[i].fullname,"") == 0)
			break;
		cout << "취미: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "등급: ";
		(cin >> pa[i].ooplevel).get();
		count++;
	}
	cout << endl;
	return count;
}

void display1(student st) {
	cout << "이름: " << st.fullname << endl;
	cout << "취미: " << st.hobby << endl;
	cout << "등급 : " << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout << "이름: " << ps->fullname << endl;
	cout << "취미: " << ps->hobby << endl;
	cout << "등급 : " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번 학생" << endl;
		cout << "이름: " << pa[i].fullname << endl;
		cout << "취미: " << pa[i].hobby << endl;
		cout << "등급 : " << pa[i].ooplevel << endl;
	}
}
