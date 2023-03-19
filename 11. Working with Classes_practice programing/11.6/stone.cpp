#include <iostream>
using std::cout;
#include "stonewt.h"
const int Size = 6;
int main() {
	Stonewt list[Size] = { Stonewt(1, 1), Stonewt(2, 2), Stonewt(3,1) };
	double input_pound;
	cout << "처음 3개의 배열 원소는 배열 선언에서 초기화하였습니다.\n";
	cout << "비어 있는 나머지 배열 원소들을 파운드 값으로 설정하십시오:\n";
	for (int i = 3; i < Size; i++)
	{
		cout << i + 1 << "번째 원소: ";
		std::cin >> input_pound;
		list[i] = Stonewt(input_pound);
	}
	Stonewt Max = list[0];
	Stonewt Min = list[0];
	Stonewt stone11(11, 0);
	int over11 = 0;
	for (int i = 0; i < Size; i++)
	{
		if (list[i] > Max)
			Max = list[i];
		else if (list[i] < Min)
			Min = list[i];
		else if (list[i] >= stone11)
			over11++;
	}
	cout << "배열에 들어 있는 모든 객체를 표시합니다.\n";
	for (int i = 0; i < Size; i++)
	{
		cout << "객체 #" << i + 1 << ": ";
		list[i].show_stn();
	}
	cout << "최대 원소: ";
	Max.show_stn();
	cout << "최소 원소: ";
	Min.show_stn();
	cout << "11스톤보다 크거나 같은 원소의 개수: " << over11 << "\n";
	return 0;
}
