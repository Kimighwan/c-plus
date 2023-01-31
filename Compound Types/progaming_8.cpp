#include <iostream>
#include <string>

struct Piza {
	std::string name;//피자 회사의 이름(여러 단어로 될 수 있다.)
	double diameter;//피자의 지름
	double wight;//피자의 중량
};

int main() {
	Piza *piza = new Piza;

	std::cout << "피자의 지름을 입력하시오 : ";
	(std::cin>>piza->diameter).get();
	std::cout << "피자 회사 이름을 입력하시오 : ";
	getline(std::cin, piza->name);
	std::cout << "피자의 중량을 입력하시오 : ";
	(std::cin >> piza->wight).get();

	std::cout << "피자 회사의 이름 : " << piza->name << std::endl;
	std::cout << "피자의 지름 : " << piza->diameter << std::endl;
	std::cout << "피자의 중량 : " << piza->wight <<"g" << std::endl;
	delete piza;
	
	return 0;
}
