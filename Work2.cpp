#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");


	cout << "[-] ����� ����\n\n";

	cout << "[1] ����\n";
	cout << "[2] �����\n";
	cout << "[3] ����\n";
	cout << "[4] �����\n";

	cout << "������� ��������:  ";

	int i;
	cin >> i;

	if (i == 1) {
		system("cls");
		cout << "������  ���� ��� � ����������!";
		Sleep(3000);

	}
	else if (i == 2) {
		system("cls");
		cout << "����� ������� , ������� �� �� ������!";
		Sleep(3000);

	}
	else if (i == 3) {
		system("cls");
		cout << "�� ����� � ������� ���";
		Sleep(3000);

	}
	else if (i == 4) {
		system("cls");
		cout << "����� �� ������ � �����, �� � �� �����!!";
		Sleep(3000);

	}
	else {
		system("cls");
		cout << "��������� �������!";
		Sleep(3000);

	}




}
