#include <iostream>
using namespace std;

float money = 5000;

void atm() {
	cout << "\nВынять или Добавить? В/Д: ";
	string a;
	cin >> a;
	if (a == "В") {
		cout << "Сколько хотите вынять: ";
		float take;
		cin >> take;
		if (take > money) {
			cout << "У вас недостаточно денег!" << endl;
			atm();
		}
		else {
			money = money - take;
			cout << "Вы выняли: ";
			cout << take << endl;
			cout << "Счет: ";
			cout << money << endl;
			atm();
		}
	}
	else if (a == "Д") {
		cout << "Сколько хотите добавить: ";
		float add;
		cin >> add;
		money = money + add;
		cout << "Вы добавили: ";
		cout << add << endl;
		cout << "Счет: ";
		cout << money << endl;
		atm();
	}
	else {
		cout << "Пожалуйста только введите В или Д" << endl;
		atm();
	}
}

int main() {
	//setlocale(LC_ALL, "Russian");
	system("chcp 1251>nul");
	cout << "Счет - ";
	cout << money << endl;
	atm();
}
