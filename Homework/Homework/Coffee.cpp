#include <iostream>
using namespace std;

int main() {
	system("chcp 1251>nul");
	string menu[] = { "����","���","���������","����","������" };
	cout << "����: " << endl;
	for (int i = 0; i < sizeof(menu); i++) {
		cout << menu[i] << endl;
	}

}
