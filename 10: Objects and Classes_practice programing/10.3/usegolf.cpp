#include <iostream>
#include "golf.h"
const int ArSize = 5;
int main() {
	golf me = golf();
	me.showgolf();

	golf ann = golf("Ann Birdfree", 24);
	ann.showgolf();

	golf andy, temp;
	andy.setgolf(temp);
	andy.showgolf();
	andy.updatehandicap();
	andy.showgolf();

	golf golfers[ArSize];
	int i, j;

	for (i = 0; i < ArSize && golfers[i].setgolf(temp); i++);
	for (j = 0; j < i; j++)
	{
		std::cout << "golfer #" << j + 1 <<std::endl;
		golfers[j].showgolf();
	}
	return 0;
}
