#include <iostream>
using namespace std;

int main3() {
	setlocale(LC_ALL, "Russian");
	float pi = 3.14;
	float r;
	cout << "������� ������: ";
	cin >> r;
	float S = r * r * pi;
	cout << "�������: ";
	cout << S << endl;
	return 0;
}