#include <iostream>
#include <string>

bool ispalindrome(const std::string& s);

int main() {
	std::string input;

	std::cout << "문자열을 입력하시오(끝내려면 빈칸입력).\n";
	std::getline(std::cin, input);
	while (std::cin && input.size() > 0)
	{
		if (ispalindrome(input))
			std::cout << "회문이 맞습니다.\n";
		else 
			std::cout << "회문이 아닙니다..\n";
		std::cout << "문자열을 입력하시오(끝내려면 빈칸입력).\n";
		std::getline(std::cin, input);
	}
	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}

bool ispalindrome(const std::string& s) {
	std::string reverse(s.rbegin(), s.rend());
	return (reverse == s);
}
