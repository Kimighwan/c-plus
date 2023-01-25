#include <iostream>
const int Cities = 5;
const int Year = 4;

int main() {

	const char* cities[Cities] = {
		"Seoul", "Jeju","Busan","Daegu","Yeosu"
	};

	int maxtemps[Year][Cities] = {
		{35,32,33,36,35}, {33,32,34,35,31},{33,34,32,35,34},{36,35,34,37,35}
	};

	std::cout << "2009년부터 2012년까지의 연중 최고 온도\n\n";
	for (int citiy = 0; citiy < Cities; citiy++) {
		std::cout << cities[citiy] << ":\t";
		for (int year = 0; year < Year; year++)
		{
			std::cout << maxtemps[year][citiy] << "\t";
		}
		std::cout << std::endl;
	}
	return 0;
}
