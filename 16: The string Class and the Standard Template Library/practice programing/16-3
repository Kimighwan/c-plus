#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	vector<string> wordlist;
	ifstream inFile;
	string temp;

	inFile.open("wordlist.txt");
	if (!inFile.is_open()) {
		cout << "파일을 열 수 없습니다.";
		exit(EXIT_FAILURE);
	}

	while (inFile >> temp)
		wordlist.push_back(temp);

	const int NUM = wordlist.size();

	char play;
	cout << "영어 단어 게임을 하시겠습니까? <y/n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[rand() % NUM];
		int length = target.length();
		string attemp(length, '-');
		string badchars;
		int guesses = 6;
		cout << "수수께끼 단어를 추측해 보십시오.\n"
			<< length << "개의 문자로 이루어져 있습니다.\n"
			<< "한 번에 한 문자씩 추측하십시오.\n"
			<< "틀릴 수 있는 기회: " << guesses << "번\n";
		cout << "추측하는 단어: " << attemp << endl;
		while (guesses > 0 && attemp != target)
		{
			char letter;
			cout << "문자를 추측하십시오: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attemp.find(letter) != string::npos)
			{
				cout << "이미 추측한 문자입니다. 다시 입력하십시오.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "틀렸습니다.\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "맞았습니다.\n";
				attemp[loc] == letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attemp[loc] == letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "추측한 단어: " << attemp << endl;
			if (attemp != target)
			{
				if (badchars.length() > 0)
					cout << "틀린 추측한 단어: " << badchars << endl;
				cout << "남은 기회: " << guesses << "번\n";
			}
		}
		if (guesses > 0)
			cout << "그렇습니다. 그것이 정답입니다.\n";
		else
			cout << "안타깝습니다. 정답은" << target << "입니다.\n";
		cout << "게임을 다시 하시겠습니까? <y/n>";
		cin >> play;
		play = tolower(play);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
