#include <iostream>
using namespace std;

float money = 5000;

void atm() {
	cout << "\n������ ��� ��������? �/�: ";
	string a;
	cin >> a;
	if (a == "�") {
		cout << "������� ������ ������: ";
		float take;
		cin >> take;
		if (take > money) {
			cout << "� ��� ������������ �����!" << endl;
			atm();
		}
		else {
			money = money - take;
			cout << "�� ������: ";
			cout << take << endl;
			cout << "����: ";
			cout << money << endl;
			atm();
		}
	}
	else if (a == "�") {
		cout << "������� ������ ��������: ";
		float add;
		cin >> add;
		money = money + add;
		cout << "�� ��������: ";
		cout << add << endl;
		cout << "����: ";
		cout << money << endl;
		atm();
	}
	else {
		cout << "���������� ������ ������� � ��� �" << endl;
		atm();
	}
}

int main() {
	//setlocale(LC_ALL, "Russian");
	system("chcp 1251>nul");
	cout << "���� - ";
	cout << money << endl;
	atm();
}
