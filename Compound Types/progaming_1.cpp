#include <iostream>
#include <string>
//두 단어 이상으로 된 영문 퍼스트 네임(이름) 받기 -> cin 을 사용해서는 공백 떄문에 2단어이상을 받을 수 없다
//사용자가 원하는 학점을 입력하고 한 단계씩 낮은 학점을 출력하기, 원하는 학점은 A, B, C중 1개
int main() {

	struct	student {
		std::string first_name;
		std::string last_name;
		char grade;
		int age = 0;
	};

	student stu;
	std::cout << "영문  퍼스트 네임(이름) : ";
	getline(std::cin, stu.first_name);

	std::cout << "영문  라스트 네임(성) : ";
	getline(std::cin, stu.last_name);

	std::cout << "학생이 원하는 학점 : ";
	std::cin >> stu.grade;

	std::cout << "나이 : ";
	std::cin >> stu.age;

	std::cout << "성명 : " << stu.last_name << ", "<< stu.first_name << std::endl;
	std::cout << "학점 : " << (char)(stu.grade + 1) << std::endl;
	std::cout << "나이 : " << stu.age;

}
