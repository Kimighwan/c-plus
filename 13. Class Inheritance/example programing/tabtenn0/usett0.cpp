#include <iostream>
#include "tabtenn0.h"
int main() {
	TableTennisPlayer player1("A", "a", true);
	TableTennisPlayer plater2("B", "b", false);
	player1.Name();
	if (player1.HaveTable())
		cout << ": 탁구대가 있다\n";
	else
		cout << ": 탁구대가 없다\n";

	plater2.Name();
	if (plater2.HaveTable())
		cout << ": 탁구대가 있다\n";
	else
		cout << ": 탁구대가 없다\n";

	return 0;
}
