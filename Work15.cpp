#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color 05");
	setlocale(0, "");

	cout << "[+] �������� ��������: \n\n";
	cout << "[1] 15 � 15 \n";
	cout << "[2] 20 � 20 \n";
	cout << "[3] 30 � 30 \n\n";
	cout << "[+] ������� �����: ";

	int menu;
	cin >> menu;

	switch (menu) {
	case 1: {
		system("cls");
		system("color 06");
		cout << "�� ������� ������ 15 � 15 \n\n";

		const int y = 15;
		const int x = 15;
		int size[y][x] = {
		 {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
		 {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
		 {1,1,1,1,1,1,1,1,1,1,1,0,0,0,1},
		 {1,1,1,0,0,0,0,0,0,0,0,0,1,1,1},
		 {1,1,1,1,1,1,1,0,1,1,1,1,0,1,1},
		 {1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		 {1,1,0,0,0,0,0,0,0,1,1,1,1,1,1},
		 {1,1,0,1,1,1,1,1,0,1,1,1,1,1,1},
		 {1,1,0,1,1,1,1,1,0,1,1,1,1,1,1},
		 {1,1,0,1,1,1,1,0,0,0,0,0,0,0,1},
		 {1,1,0,1,1,1,1,0,0,1,1,1,1,0,1},
		 {1,1,0,1,1,1,1,0,0,0,0,0,0,0,1},
		 {1,1,0,0,0,0,0,0,0,0,1,1,1,1,1},
		 {1,1,1,1,1,1,1,1,0,0,0,0,0,0,1},
		 {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}
		};
		for (int a = 0; a < y; a++) {
			for (int b = 0; b < x; b++) {
				if(size[a][b] == 0) {
					cout <<"  ";
				}
				else {
					cout << "# ";
				}
			}
				cout << endl;
			}
		Sleep(8000);
		system("cls");
		main();
		break;
	}
	case 2: {
		system("cls");
		const int y = 20;
		const int x = 20;
		int maze[y][x] = {
			{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
			{1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1},
			{1,1,1,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,1,1},
			{1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1},
			{1,1,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
			{1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
			{1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1},
			{1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1},
			{1,1,0,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1,1},
			{1,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,0,1,1},
			{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1},
			{1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1},
			{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1},
			{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
		};
		for (int a = 0; a < y; a++) {
			for (int b = 0; b < x; b++) {
				if (maze[a][b] == 1) {
					cout << "# ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	case 3: {
		system("cls");
		const int y = 30;
		const int x = 30;
		int maze[y][x] = {				 
			{1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
			{1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
			{1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
			{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1},
			{1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1},
			{1,1,0,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1},
			{1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1},
			{1,1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1},
			{1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1},
			{1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,0,1,0,1,0,1,1,1},
			{1,1,1,0,1,1,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,0,1,0,1,1,1},
			{1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1},
			{1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1},
			{1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1},
			{1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		};
		for (int a = 0; a < y; a++) {
			for (int b = 0; b < x; b++) {
				if (maze[a][b] == 1) {
					cout << "# ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	}
		  return 0;
}