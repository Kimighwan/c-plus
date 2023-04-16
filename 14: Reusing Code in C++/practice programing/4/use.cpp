#include "person.h"
#include <cstring>
const int SIZE = 5;
int main() {
	using namespace std;
	int ct, i;
	Person* gang[SIZE];
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "gang 카테고리를 선택하십시오:\n"
			<< "o: ordinary person  g: gunslinger  "
			<< "p: pokerplayer  b: bad dude  q: quit\n";
		cin >> choice;
		while (strchr("ogpbq", choice) == NULL)
		{
			cout << "o g p b q 중 1개를 선택하십시오: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'o':
			gang[ct] = new Person;
			break;
		case 'q':
			gang[ct] = new Gunslinger;
			break;
		case 'p':
			gang[ct] = new PokerPlayer;
			break;
		case 'b':
			gang[ct] = new BadDude;
			break;
		}
		cin.get();
		gang[ct]->set();
	}

	cout << "gnag 명단:\n";
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		gang[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete gang[i];
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
