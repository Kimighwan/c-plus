#include <iostream>
using namespace std;
#include "cow.h"

int main() {
	Cow cow1;
	Cow cow2(" 돼지", " 먹기", 543.21);

	cow1.ShowCow();
	cow2.ShowCow();
	cow1 = cow2;
	cow1.ShowCow();

	return 0;
}
