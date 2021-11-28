#include <iostream>
#include <windows.h>
#define color system("color 53")
#define text system("color 0B");
#define clear system("cls");
using namespace std;


int main() {
	setlocale(0, "");
	cout << "[+] Программа - Функции \n";
	cout << "[1] очищение консоли \n";
	cout << "[2] изменить цвет фона \n";
	cout << "[3] изменить цвет текста \n";
	cout << "[4] вывод размера типа данных int \n";
	cout << "[5] вывод размера типа данных char \n";
	cout << "[6] вывод размера типа данных double \n";
	cout << "[7] вывод размера типа данных float \n";
	cout << "[8] вывод размера типа данных bool \n";
	cout << "[9] вывод сообщения привет я функция \n";
	cout << "[+] Введите цифру \n";



	int menu;
	cin >> menu;

	if (menu == 1) {
		cout << " Очищение консоли \n";
		clear;
	}

	if (menu == 2) {
		clear;
		cout << " изменение цвета фона \n";
		color;
		Sleep(2000);
		main();
	}
	if (menu == 3) {
		clear;
		cout << " изменение цвета текста \n";
		text;
		Sleep(2000);
		main();
	}
	if (menu == 4) {
		clear;
		cout << " вывод размера типа данных int \n";
		int tip1 = 10;
		cout << "int | tip1 = " << sizeof(tip1) << endl;
	}

	if (menu == 5) {
		clear;
		cout << " вывод размера типа данных char \n";
		char tip2 = '#';
		cout << "char | tip2 = " << sizeof(tip2) << endl;
	}

	if (menu == 6) {
		clear;
		cout << " вывод размера типа данных double \n";
		double tip3 = 1.2;
		cout << "double | tip3 = " << sizeof(tip3) << endl;
	}

	if (menu == 7) {
		clear;
		cout << " вывод размера типа данных float \n";
		float tip4 = 122.2;
		cout << "float |tip4 = " << sizeof(tip4) << endl;
	}

	if (menu == 8) {
		clear;
		cout << " вывод размера типа данных bool \n";
		bool tip5 = true;
		cout << "bool | ti5 = " << sizeof(tip5) << endl;
	}
	if (menu == 9) {
		clear;
		cout << "Привет я функция!" << endl;
	}


	int _; cin >> _;
	return 0;
}

