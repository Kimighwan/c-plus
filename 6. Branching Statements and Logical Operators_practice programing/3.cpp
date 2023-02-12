#include <iostream>
int main() {
	std::cout << "다음 선택 사항 중에서 하나를 선택하십시오.  (끝내려면 q)\n";
	std::cout << "c) camera       p) pianist\n";
	std::cout << "t) tree         g) game\n";
	char ch;
	std::cin >> ch;
	while (ch != 'q')
	{
		switch (ch) 
		{
		case 'c':
			std::cout << "카메라 입니다.\n";
			break;
		case 'p': 
			std::cout << "피아니스트 입니다.\n";
			break;
		case 't':
			std::cout << "나무 입니디.\n";
			break;
		case 'g': 
			std::cout << "게임 입니다.\n";
			break;
		default: while (!(ch == 'c' || ch == 'p' || ch == 't' || ch == 'g'))
		        {
			       std::cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
			       std::cin >> ch;
			       if (ch == 'q')
				       break;
		         }
			   continue;
		}
		std::cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
		std::cin >> ch;
	}
	std::cout << "프로그램을 종료합니다.";
	return 0;
}
