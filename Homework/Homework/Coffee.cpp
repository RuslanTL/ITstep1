#include <iostream>
using namespace std;

int main() {
	system("chcp 1251>nul");
	string menu[] = { "Кофе","Чай","Бутерброд","Торт","Пончик" };
	cout << "Меню: " << endl;
	for (int i = 0; i < sizeof(menu); i++) {
		cout << menu[i] << endl;
	}

}
