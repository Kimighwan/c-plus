#include <iostream>
using namespace std;
#include "dmaabc.h"
const int MAX = 4;
const int LEN = 40;
const int COLORS = 20;
const int STYLES = 20;
int main() {
	dmaABC* list[MAX];
	int i;
	for (i = 0; i < MAX; i++)
	{
		char tlabel[LEN];
		int trating;
		char tcolor[COLORS];
		char tstyle[STYLES];
		char kind;

		cout << "상표를 입력하십시오: ";
		cin.getline(tlabel, LEN);
		cout << "등급을 입력하십시오: ";
		cin >> trating;
		cout << "baseDMA 객체는 1, lacksDMA 객체는 2, hasDMA 객체는 3을 입력하십시오: ";
		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
			cout << "1, 2, 3 중에서 하나를 입력하십시오: ";
		while (cin.get() != '\n')
			continue;
		if (kind == '1')
			list[i] = new baseDMA(tlabel, trating);
		else if (kind == '2')
		{
			cout << "색상을 입력하십시오: ";
			cin.getline(tcolor, COLORS);
			list[i] = new lacksDMA(tcolor, tlabel, trating);
		}
		else
		{
			cout << "스타일을 입력하십시오: ";
			cin.getline(tstyle, STYLES);
			list[i] = new hasDMA(tstyle, tlabel, trating);
		}
	}
	cout << endl;
	for (i = 0; i < MAX; i++)
	{
		list[i]->View();
		cout << endl;
	}
	for (i = 0; i < MAX; i++)
	{
		delete list[i];
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
