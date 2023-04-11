#include "workermi.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//Worker 메서드
Worker::~Worker() {}

void Worker::Data() const {
	cout << "사원 이름: " << fullname << endl;
	cout << "사원 번호: " << id << endl;
}

void Worker::Get() {
	getline(cin, fullname);
	cout << "사원 번호를 입력하십시오: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
//Waiter 메서드
void Waiter::Set() {
	cout << "웨이터 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const {
	cout << "직종: 웨이터\n";
	Worker::Data();
	Data();
}

void Waiter::Data() const {
	cout << "웨이터 등급: " << panache << endl;
}

void Waiter::Get() {
	cout << "웨이터 등급을 입력하십시오: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
//Singer 메서드
const char* Singer::pv[Singer::Vtype] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Set() {
	cout << "가수의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void Singer::Show() const {
	cout << "직종: 가수\n";
	Worker::Data();
	Data();
}

void Singer::Data() const {
	cout << "목소리 유형: " << pv[voice] << endl;
}

void Singer::Get() {
	cout << "가수의 목소리 유형 번호를 입력하십시오\n";
	int i;
	for (i = 0; i < Vtype; i++)
	{
		cout << i << ": " << pv[i] << "		";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}
//SingingWaiter 메서드
void SingingWaiter::Data() const {
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get() {
	Singer::Get();
	Waiter::Get();
}

void SingingWaiter::Set() {
	cout << "가수 겸 웨이터의 이름을 입력하십시오: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const {
	cout << "직종: 가수 겸 웨이터\n";
	Worker::Data();
	Data();
}
