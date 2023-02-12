//외따로 떨어진 q가 입력될 때까지 한 단어씩 읽는 프로그램
//모음으로 시작하는 단어 수, 자음으로 시작하는 단어 수, 어디에도 속하지 않는 단어의 수를 출력
#include <iostream>
#include <string>
#include <cctype>

int main() {
	int vowel = 0;
	int consonant = 0;
	int other = 0;
	char ch;
	std::cout << "단어들을 입력하시오 (끝내려면 q): \n";
	std::string word;
	std::cin >> word;

	while (word != "q")
	{
		ch = tolower(word[0]);
		if (isalpha(ch))
		{
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
				|| ch == 'u')
				vowel++;
			else
				consonant++;
		}
		else
			other++;
		std::cin >> word;
	}
	std::cout << "모음으로 시작하는 단어 수: " << vowel << std::endl;
	std::cout << "자음으로 시작하는 단어 수: " << consonant << std::endl;
	std::cout << "기타: " << other << std::endl;
}
