#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"
using std::cout;
const int Num = 10;
int main() {
	std::srand(std::time(0));
	cout << "스택의 크기를 입력하십시오: ";
	int stacksize;
	std::cin >> stacksize;
	Stack<const char*> st(stacksize);

	const char* in[Num] = { " 1: a"," 2: b"," 3: c"," 4: d"," 5: e", " 6: f", " 7: g", " 8: h", " 9: i", " 10: j" };
	const char* out[Num];

	int processed = 0;
	int newtin = 0;
	while (processed < Num) 
	{
		if (st.isempty())
			st.push(in[newtin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if (std::rand() % 2 && newtin < Num) // 확률 5:5
			st.push(in[newtin++]);
		else
			st.pop(out[processed++]);
	}
	for (int i = 0; i < Num; i++)
		cout << out[i] << std::endl;
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
