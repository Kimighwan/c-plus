#include <iostream>
#include "golf.h"

int main() {
	golf team[3];
	std::cout << "3명의 golf멤버를 입력하십시오\n";
	int i;
	for (i = 0; i < 3; i++)
		if (setgolf(team[i]) == 0)
			break;
	for (i = 0; i < 3; i++)
		showgolf(team[i]);
	setgolf(team[0], "Kim Ikhwan", 3);
	showgolf(team[0]);
	handicap(team[0], 3);
	showgolf(team[0]);

	return 0;
}
