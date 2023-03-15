#include <iostream> 
#include "plorg.h"

int main() {
	Plorg A;
	Plorg B("마인협회", 10);
	Plorg C("헌터협회", 50);

	A.show();
	B.show();
	C.show();

	C.changeCI(100);
	C.show();
	return 0;
}
