#include <iostream>
#include <cstring>
//done이라는 단어가 입력될 때까지 단어 갯수 읽기
const int LEN = 50;
int main() {
	int count=0;
	char ch[LEN];
	std::cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력): " << std::endl;

	while (std::cin >> ch && strcmp("done", ch))
		count++;

	std::cout << "총 " << count << " 단어가 입력되었습니다.";
	return 0;
}
