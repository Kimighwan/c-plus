#include <iostream>
#include "move.h"

int main()
{
	Move A, B;
	Move C(5, 7);
	A.showmove();
	B.showmove();
	C.showmove();

	A.reset(3, 5);
	B.reset(7, 6);
	C = A.add(B);
	A.showmove();
	B.showmove();
	C.showmove();

	return 0;
}
