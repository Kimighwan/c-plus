#include <iostream>
const int LEN = 5;
const int STRLEN = 20;
struct bop { //회원 구조체
	char fullname[STRLEN];
	char title[STRLEN];
	char bopname[STRLEN];
	int perference; // 0 = fullname  1 = title  2 = bopname
};
void show_menu();
void show_fullname(bop list[], int count);
void show_title(bop list[], int count);
void show_bopname(bop list[], int count);
void show_perference(bop list[], int count);

int main() {
	bop list[LEN] =
	{
		{ "Wimp Macho", "CEO", "BLUESKY", 0 },
		{ "Raki Rhodes", "Junior Programmer", "REDCLOUD", 1 },
		{ "Celia Laiter", "Technical Editor", "MIPS", 2 },
		{ "Hoppy Hipman", "Analyst Trainee", "SWEETY", 1 },
		{ "Pat Hand", "Technical Writer", "LOOPY", 2 }
	};

	show_menu();
	char choice;
	std::cin >> choice;
	while (choice != 'q' && choice != 'Q')
	{
		switch (choice)
		{
		case 'a':
		case 'A':
			show_fullname(list, LEN);
			break;
		case 'b':
		case 'B':
			show_title(list, LEN);
			break;
		case 'c':
		case 'C':
			show_bopname(list, LEN);
			break;
		case 'd':
		case 'D':
			show_perference(list, LEN);
			break;
		}
		std::cout << "원하는 것을 선택하십시오: ";
		std::cin >> choice;
		if (choice == 'q' || choice == 'Q')
			break;
	}
	std::cout << "프로그램을 종료합니다.";
	return 0;
}

void show_menu() {
	std::cout << "Benevolent Order of Programmers\n"
		"a. 실명으로 열람\t\tb. 직함으로 열람\n"
	    "c. BOP 아이디로 열람\t\td. 회원이 지정한 것으로 열람\n"
	    "q. 종료\n"
	    "원하는 것을 선택하십시오: ";
}

void show_fullname(bop list[], int count) {
	for (int i = 0; i < count; i++) {
		std::cout << list[i].fullname << "\n";
	}
}

void show_title(bop list[], int count) {
	for (int i = 0; i < count; i++)
		std::cout << list[i].title << std::endl;
}

void show_bopname(bop list[], int count) {
	for (int i = 0; i < count; i++)
		std::cout << list[i].bopname << std::endl;
}

void show_perference(bop list[], int count) {
	for (int i = 0; i < count; i++) {
		switch (list[i].perference)
		{
		case 0:
			std::cout << list[i].fullname << std::endl;
			break;
		case 1:
			std::cout << list[i].title << std::endl;
			break;
		case 2:
			std::cout << list[i].bopname << std::endl;
			break;
		}
	}
}
