#include <iostream>
#include <windows.h>
#define color system("color 53")
#define text system("color 0B");
#define clear system("cls");
using namespace std;


int main() {
	setlocale(0, "");
	cout << "[+] ��������� - ������� \n";
	cout << "[1] �������� ������� \n";
	cout << "[2] �������� ���� ���� \n";
	cout << "[3] �������� ���� ������ \n";
	cout << "[4] ����� ������� ���� ������ int \n";
	cout << "[5] ����� ������� ���� ������ char \n";
	cout << "[6] ����� ������� ���� ������ double \n";
	cout << "[7] ����� ������� ���� ������ float \n";
	cout << "[8] ����� ������� ���� ������ bool \n";
	cout << "[9] ����� ��������� ������ � ������� \n";
	cout << "[+] ������� ����� \n";



	int menu;
	cin >> menu;

	if (menu == 1) {
		cout << " �������� ������� \n";
		clear;
	}

	if (menu == 2) {
		clear;
		cout << " ��������� ����� ���� \n";
		color;
		Sleep(2000);
		main();
	}
	if (menu == 3) {
		clear;
		cout << " ��������� ����� ������ \n";
		text;
		Sleep(2000);
		main();
	}
	if (menu == 4) {
		clear;
		cout << " ����� ������� ���� ������ int \n";
		int tip1 = 10;
		cout << "int | tip1 = " << sizeof(tip1) << endl;
	}

	if (menu == 5) {
		clear;
		cout << " ����� ������� ���� ������ char \n";
		char tip2 = '#';
		cout << "char | tip2 = " << sizeof(tip2) << endl;
	}

	if (menu == 6) {
		clear;
		cout << " ����� ������� ���� ������ double \n";
		double tip3 = 1.2;
		cout << "double | tip3 = " << sizeof(tip3) << endl;
	}

	if (menu == 7) {
		clear;
		cout << " ����� ������� ���� ������ float \n";
		float tip4 = 122.2;
		cout << "float |tip4 = " << sizeof(tip4) << endl;
	}

	if (menu == 8) {
		clear;
		cout << " ����� ������� ���� ������ bool \n";
		bool tip5 = true;
		cout << "bool | ti5 = " << sizeof(tip5) << endl;
	}
	if (menu == 9) {
		clear;
		cout << "������ � �������!" << endl;
	}


	int _; cin >> _;
	return 0;
}

