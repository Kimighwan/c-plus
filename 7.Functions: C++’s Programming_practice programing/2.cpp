#include <iostream>
const int MAX = 10;
using namespace std;
int Input(int score[], int MAX);
double avg(int score[], int count);
int Out(int score[], int count);

int main() {
	int score[MAX];
	int count = Input(score, MAX);
	Out(score, count);

}

int Input(int score[], int count) {
	cout << "골프 스코어를 최대 10개까지 입력 하시오(끝내려면 q를 입력하시오): \n";
	cout << "스코어 #1: ";
	int i = 0;
	while (i<MAX && cin >> score[i])
	{
		if (++i < MAX)
			cout << "스코어 #" << i + 1 << ": ";
	}
	return i;
}

double avg(int score[], int count) {
	int sum = 0;
	double avg;
	for (int i = 0; i < count; i++)
		sum += score[i];
	avg = sum / count;
	return avg;
}

int Out(int score[], int count) {
	if (count == 0)
	{
		cout << "입력된 스코어가 없습니다.\n";
		return 0;
	}
	for (int i = 0; i < count; i++)
		cout << score[i] << "\t";
	cout << "\n평균 스코어: " << avg(score, count);
	return 0;
}
