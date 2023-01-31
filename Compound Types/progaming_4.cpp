#include <iostream>
#include <string>

int main() {
	
	std::string firstname;
	std::string lastname;
	std::string fullname;

	std::cout << "영문  퍼스트 네임(이름) : ";
	getline(std::cin, firstname);

	std::cout << "영문  라스트 네임(성) : ";
	getline(std::cin, lastname);


	fullname = lastname + ", " + firstname;
	std::cout << "하나의 문자열로 만들면: " << fullname;
	return 0;
}
