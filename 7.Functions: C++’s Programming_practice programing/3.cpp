#include <iostream>
using namespace std;

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showbox(box list);
void vol_max(box* list);

int main() {
	box test = { "ABC", 10.5, 20.5, 30.5, 0 };
	showbox(test);
	vol_max(&test);
	showbox(test);

	return 0;
}

void showbox(box list) {
	cout << "maker: " << list.maker << endl;
	cout << "height: " << list.height << endl;
	cout << "width: " << list.width << endl;
	cout << "length: " << list.length << endl;
	cout << "volume: " << list.volume << endl;
	cout << endl;
}

void vol_max(box* list) {
	list->volume = list->height * list->length * list->width;
}
