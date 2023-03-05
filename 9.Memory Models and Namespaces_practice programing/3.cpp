#include <iostream>
#include <new>
#include <cstring>
struct chaff {
	char  dross[20];
	int slag;
};
char buffer[500];
int main() {
	using namespace std;
	chaff* p1,*p2;
	p1 = new (buffer) chaff[2];
	strcpy_s(p1[0].dross, "ikhwan");
	p1[0].slag = 1;
	strcpy_s(p1[1].dross, "kukhwan");
	p1[1].slag = 2;

	char* buffer2 = new char [500];
	p2 = new (buffer2) chaff[2];

	strcpy_s(p2[0].dross, "Ik");
	p2[0].slag = 3;
	strcpy_s(p2[1].dross, "Kuk");
	p2[1].slag = 4;

	for (int i = 0; i < 2; i++)
		cout << "dross: " << p1[i].dross << ", slag: " << p1[i].slag << endl;

	for (int i = 0; i < 2; i++)
		cout << "dross: " << p2[i].dross << ", slag: " << p2[i].slag << endl;

	return 0;
}
