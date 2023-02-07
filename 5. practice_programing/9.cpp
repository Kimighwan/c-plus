#include <iostream>
#include <string>
const int LEN = 50;
int main() {
	int count = 0;
	std::string ch;
	std::cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력): " << std::endl;

	while (1) {
		std::cin >> ch;
		if (ch == "done")
			break;
		count++;
	}

	std::cout << "총 " << count << " 단어가 입력되었습니다.";
	return 0;
}
