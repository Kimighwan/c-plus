#include <iostream>
using namespace std;
#include "classic.h"
void Bravo(const Cd& disk);
int main() {
	Cd c1("Beatles", "Capitol", 12, 35.5);
	Classic c2 = Classic("Piaon Sonata in B falt, Fantasia in C	", "Alfred BRendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
}
