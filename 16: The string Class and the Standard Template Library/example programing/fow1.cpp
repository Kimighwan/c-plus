#include <iostream>
#include <string>
#include <memory>
int main() {
	using namespace std;
	auto_ptr<string> films[5] = {
		auto_ptr<string>(new string("A")),
		auto_ptr<string>(new string("B")),
		auto_ptr<string>(new string("C")),
		auto_ptr<string>(new string("D")),
		auto_ptr<string>(new string("E"))
	};
	auto_ptr<string> pwin;
	pwin = films[2]; // films[2]가 소융권을 읽음

	cout << "다음은 최고의 조류 영화상 후보입니다.\n";
	for (int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "수상자는 " << *pwin << "!\n";
	cin.get();
	return 0;
}
