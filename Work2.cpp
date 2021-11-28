#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");


	cout << "[-] Время года\n\n";

	cout << "[1] Лето\n";
	cout << "[2] Осень\n";
	cout << "[3] Зима\n";
	cout << "[4] Весна\n";

	cout << "Введите значения:  ";

	int i;
	cin >> i;

	if (i == 1) {
		system("cls");
		cout << "Сейчас  лето едь в Узбекистан!";
		Sleep(3000);

	}
	else if (i == 2) {
		system("cls");
		cout << "Дожди моросят , главное ты не мороси!";
		Sleep(3000);

	}
	else if (i == 3) {
		system("cls");
		cout << "По кайфу в Чувашию едь";
		Sleep(3000);

	}
	else if (i == 4) {
		system("cls");
		cout << "Грязь не только в людях, но и на улице!!";
		Sleep(3000);

	}
	else {
		system("cls");
		cout << "Нормально выбирай!";
		Sleep(3000);

	}




}
