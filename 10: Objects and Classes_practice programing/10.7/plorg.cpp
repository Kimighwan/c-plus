#include <iostream>
#include "plorg.h"

Plorg::Plorg(const char* name, int index) {
	strncpy_s(pl_name, name, 19);
	pl_name[20] = '\0';
	ci_index = index;
}

void Plorg::show() const {
	std::cout << "이름: " << pl_name << ", CI: " << ci_index << std::endl;
}

void Plorg::changeCI(int index) {
	ci_index = index;
}
