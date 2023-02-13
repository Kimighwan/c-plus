#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main() {
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하십시오: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << filename << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "파일 끝에 도달했습니다.\n";
	else if (inFile.fail())
		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
	if (count == 0)
		cout << "데이터가 없습니다,\n";
	else
	{
		cout << "읽은 항목의 개수: " << count << endl;
		cout << "합계: " << sum << endl;
		cout << "평균: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}
