#include <iostream>
#include <cstring>
const int SIZE = 20;
int main() {

	
	char first_name[SIZE];
	char last_name[SIZE];
	char fullname[2 * SIZE + 1];

	std::cout << "영문  퍼스트 네임(이름) : ";
	std::cin.getline(first_name, SIZE);

	std::cout << "영문  라스트 네임(성) : ";
	std::cin.getline(last_name, SIZE);

	strncpy_s(fullname, last_name, SIZE);
	strcat_s(fullname, ", ");
	strncat_s(fullname, first_name, SIZE);

	fullname[2 * SIZE] = '\n';
	std::cout << "하나의 문자열로 만들면: " << fullname;
	return 0;
}
