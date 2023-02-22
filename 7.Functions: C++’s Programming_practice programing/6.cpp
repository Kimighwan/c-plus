#include <iostream>
using namespace std;
const int MAX = 10;
int Fill_array(double array[], int n); // 배열에 저장할 double 형 값들을 입력하라는 프롬프트 표시한다
                                       // 배열이 가득 차거나 숫자가 아닌 것이 입력되면 멈추고 그때까지 입력받은 갯수를 리턴한다.
void Show_array(double array[], int n); //배열 내용 출력
void Reverse_array(double array[], int n); //배열의 수를 뒤집는다.
//배열채우고 출력하고, 저장 순서를 뒤집고, 출력하고, 배열의 첫 원소와 끝 원소를 제외한 원소를 뒤집고 출력한다

int main() {
    double array[MAX];
    int count = Fill_array(array, MAX);
    Show_array(array, MAX);
    Reverse_array(array, MAX);
    Show_array(array, MAX);
    Reverse_array(array + 1, MAX - 2);
    Show_array(array, MAX);
}

int Fill_array(double array[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "번째 원소: ";
        if (!(cin >> array[i]))
            break;
        count++;
    }
    return count;
}

void Show_array(double array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void Reverse_array(double array[], int n) {
    int i, j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
