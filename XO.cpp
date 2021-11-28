#include <iostream>
#include <Windows.h>
#define clear system("cls");
using namespace std;

int main();
int field = 1;
int choise = 1;

void rules() {
	cout << "[+] Правила игры в Крестики-нолики\n\n";
	cout << "[+]Бомбовые крестики нолики для бомбовых играков , для победы требуется заполнить ряды по вертикали или горизантали или диогонали\n";
	cout << "[+]Желаю Успехов!";
	int exit2;
	cout << "[+] Введите число 1 для выхода в меню: ";
	cin >> exit2;
	if (exit2 == 1) {
		clear;
		main();
	}

}
void settings() {
	int select;
	cout << "[+] Настройки игры\n\n";
	cout << "[1] Размер игрового поля\n";
	cout << "[2] Ходы\n";
	cout << "[3] Выход из настроек\n";
	cout << "Введите число: ";
	cin >> select;
	switch (select)
	{
	case 1:
	{
		clear;
		cout << "[+] Размер игрового поля:\n\n";
		cout << "[1] 3 x 3\n";
		cout << "[2] 4 x 4\n";
		cout << "[3] 5 x 5\n";
		cout << "Введите число: ";
		cin >> field;
		clear;
		settings();
		break;
	}
	case 2:
	{
		clear;
		cout << " Ходы\n";
		cout << "[1] Первый ход крестик\n";
		cout << "[2] Первый ход нолик\n";
		cout << "Введите число: ";
		cin >> choise;
		if (choise == 1) {
			clear;
			settings();
		}
		else if (choise == 2) {
			clear;
			settings();
		}
		else {
			clear;
			Sleep(1000);
			cout << "Ошибка";
			Sleep(1000);
			clear;
			settings();
		}
		break;
	}
	case 3:
	{
		clear;
		main();
		break;
	}
	default:
		cout << "Ошибка";
		Sleep(1000);
		clear;
		settings;
		break;
	}

}
void play() {
	bool xo;
	bool win = true;
	if (choise == 1) {
		xo = true;
	}
	else if (choise == 2) {
		xo = false;
	}
	else {
		xo = true;
	}
	if (field == 1) {
		const int x = 3;
		const int y = 3;
		int field[3][3] = {
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};

		while (win == true) {
			clear;
			int select;
			for (int i = 0; i < y; i++) {
				cout << " ";
				for (int j = 0; j < x; j++) {
					if (field[i][j] == 0) {
						cout << "# ";
					}
					else if (field[i][j] == 1) {
						cout << "X ";
						
					}
					else if (field[i][j] == 2) {
						cout << "O ";
						
					}
				}
				cout << "\n";
			}
			if (xo == true) {
				cout << "Ходит крестик: ";
				cin >> select;
				xo = false;
			}
			else if (xo == false) {
				cout << "Ходит нолик: ";
				cin >> select;
				xo = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!xo ? field[0][0] = 1 : field[0][0] = 2;
				}
				else {xo= !xo; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!xo ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!xo ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 4:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!xo ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 5:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!xo ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 6:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!xo ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 7:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!xo ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 8:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!xo ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 9:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!xo ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { xo = !xo; }
				break;
			default:
				cout << "Ошибка";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 ||
				field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 ||
				field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 ||
				field[0][2] == 1 && field[1][1] == 1 && field[2][0] == 1)
			{
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 ||
				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 ||
				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 ||
				field[0][2] == 2 && field[1][1] == 2 && field[2][0] == 2)
			{
				clear;
				win = false;
				cout << "Победа нолика";
			}
			else if (field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0) {
				clear;
				win = false;
				cout << "Ничья";
			}
		}
	}
	else if (field == 2) {
		const int x = 4;
		const int y = 4;
		int field[4][4] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		while (win == true) {
			clear;
			int select;
			for (int i = 0; i < y; i++) {
				cout << " ";
				for (int j = 0; j < x; j++) {
					if (field[i][j] == 0) {
						cout << "# ";
					}
					else if (field[i][j] == 1) {
						cout << "X ";
					}
					else if (field[i][j] == 2) {
						cout << "O ";
					}
				}
				cout << "\n";
			}
			if (xo == true) {
				cout << "Ходит крестик";
				cin >> select;
				xo = false;
			}
			else if (xo == false) {
				cout << "Ходит нолик";
				cin >> select;
				xo = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!xo ? field[0][0] = 1 : field[0][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!xo ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!xo ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 4:
				if (field[0][3] != 1 && field[0][3] != 2) {
					!xo ? field[0][3] = 1 : field[0][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 5:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!xo ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 6:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!xo ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 7:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!xo ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 8:
				if (field[1][3] != 1 && field[1][3] != 2) {
					!xo ? field[1][3] = 1 : field[1][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 9:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!xo ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 10:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!xo ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 11:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!xo ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 12:
				if (field[2][3] != 1 && field[2][3] != 2) {
					!xo ? field[2][3] = 1 : field[2][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 13:
				if (field[3][0] != 1 && field[3][0] != 2) {
					!xo ? field[3][0] = 1 : field[3][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 14:
				if (field[3][1] != 1 && field[3][1] != 2) {
					!xo ? field[3][1] = 1 : field[3][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 15:
				if (field[3][2] != 1 && field[3][2] != 2) {
					!xo ? field[3][2] = 1 : field[3][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 16:
				if (field[3][3] != 1 && field[3][3] != 2) {
					!xo ? field[3][3] = 1 : field[3][3] = 2;
				}
				else { xo = !xo; }
				break;
			default:
				cout << "Ошибка";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 && field[0][3] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 && field[1][3] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 && field[2][3] == 1 ||
				field[3][0] == 1 && field[3][1] == 1 && field[3][2] == 1 && field[3][3] == 1
				)
			{
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 && field[3][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 && field[3][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 && field[3][2] == 1 ||
				field[0][3] == 1 && field[1][3] == 1 && field[2][3] == 1 && field[3][3] == 1) {
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 && field[3][3] == 1 ||
				field[3][0] == 1 && field[1][3] == 1 && field[2][2] == 1 && field[0][3] == 1) {
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (
				field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 && field[0][3] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 && field[1][3] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 && field[2][3] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 ||
				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 && field[3][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 && field[3][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 && field[3][2] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 ||
				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 && field[3][3] == 2 ||
				field[3][0] == 2 && field[1][3] == 2 && field[2][2] == 2 && field[0][3] == 2)
			{
				clear;
				win = false;
				cout << "Победа нолика";
			}
			else if (
				field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 && field[0][3] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 && field[1][3] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0 && field[2][3] != 0 &&
				field[3][0] != 0 && field[3][1] != 0 && field[3][2] != 0 && field[3][3] != 0)
			{
				clear;
				win = false;
				cout << "Ничья";
			}
		}
	}
	else if (field == 3) {
		const int x = 5;
		const int y = 5;
		int field[5][5] = {
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
		};
		while (win == true) {
			clear;
			int select;
			for (int i = 0; i < y; i++) {
				cout << " ";
				for (int j = 0; j < x; j++) {
					if (field[i][j] == 0) {
						cout << "# ";
					}
					else if (field[i][j] == 1) {
						cout << "X ";
					}
					else if (field[i][j] == 2) {
						cout << "O ";
					}
				}
				cout << "\n";
			}
			if (xo == true) {
				cout << "Ходит крестик: ";
				cin >> select;
				xo = false;
			}
			else if (xo == false) {
				cout << "Ходит нолик: ";
				cin >> select;
				xo = true;
			}
			switch (select)
			{
			case 1:
				if (field[0][0] != 1 && field[0][0] != 2) {
					!xo ? field[0][0] = 1 : field[0][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 2:
				if (field[0][1] != 1 && field[0][1] != 2) {
					!xo ? field[0][1] = 1 : field[0][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 3:
				if (field[0][2] != 1 && field[0][2] != 2) {
					!xo ? field[0][2] = 1 : field[0][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 4:
				if (field[0][3] != 1 && field[0][3] != 2) {
					!xo ? field[0][3] = 1 : field[0][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 5:
				if (field[0][4] != 1 && field[0][4] != 2) {
					!xo ? field[0][4] = 1 : field[0][4] = 2;
				}
				else { xo = !xo; }
				break;
			case 6:
				if (field[1][0] != 1 && field[1][0] != 2) {
					!xo ? field[1][0] = 1 : field[1][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 7:
				if (field[1][1] != 1 && field[1][1] != 2) {
					!xo ? field[1][1] = 1 : field[1][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 8:
				if (field[1][2] != 1 && field[1][2] != 2) {
					!xo ? field[1][2] = 1 : field[1][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 9:
				if (field[1][3] != 1 && field[1][3] != 2) {
					!xo ? field[1][3] = 1 : field[1][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 10:
				if (field[1][4] != 1 && field[1][4] != 2) {
					!xo ? field[1][4] = 1 : field[1][4] = 2;
				}
				else { xo = !xo; }
				break;
			case 11:
				if (field[2][0] != 1 && field[2][0] != 2) {
					!xo ? field[2][0] = 1 : field[2][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 12:
				if (field[2][1] != 1 && field[2][1] != 2) {
					!xo ? field[2][1] = 1 : field[2][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 13:
				if (field[2][2] != 1 && field[2][2] != 2) {
					!xo ? field[2][2] = 1 : field[2][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 14:
				if (field[2][3] != 1 && field[2][3] != 2) {
					!xo ? field[2][3] = 1 : field[2][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 15:
				if (field[2][4] != 1 && field[2][4] != 2) {
					!xo ? field[2][4] = 1 : field[2][4] = 2;
				}
				else { xo = !xo; }
				break;
			case 16:
				if (field[3][0] != 1 && field[3][0] != 2) {
					!xo ? field[3][0] = 1 : field[3][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 17:
				if (field[3][1] != 1 && field[3][1] != 2) {
					!xo ? field[3][1] = 1 : field[3][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 18:
				if (field[3][2] != 1 && field[3][2] != 2) {
					!xo ? field[3][2] = 1 : field[3][2] = 2;
				}
				else { xo  = !xo; }
				break;
			case 19:
				if (field[3][3] != 1 && field[3][3] != 2) {
					!xo ? field[3][3] = 1 : field[3][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 20:
				if (field[3][4] != 1 && field[3][4] != 2) {
					!xo ? field[3][4] = 1 : field[3][4] = 2;
				}
				else { xo = !xo; }
				break;
			case 21:
				if (field[4][0] != 1 && field[4][0] != 2) {
					xo ? field[4][0] = 1 : field[4][0] = 2;
				}
				else { xo = !xo; }
				break;
			case 22:
				if (field[4][1] != 1 && field[4][1] != 2) {
					!xo ? field[4][1] = 1 : field[4][1] = 2;
				}
				else { xo = !xo; }
				break;
			case 23:
				if (field[4][2] != 1 && field[4][2] != 2) {
					!xo ? field[4][2] = 1 : field[4][2] = 2;
				}
				else { xo = !xo; }
				break;
			case 24:
				if (field[4][3] != 1 && field[4][3] != 2) {
					!xo ? field[4][3] = 1 : field[4][3] = 2;
				}
				else { xo = !xo; }
				break;
			case 25:
				if (field[4][4] != 1 && field[4][4] != 2) {
					!xo ? field[4][4] = 1 : field[4][4] = 2;
				}
				else { xo = !xo; }
				break;
			default:
				cout << "Ошибка";
				break;
			}
			if (field[0][0] == 1 && field[0][1] == 1 && field[0][2] == 1 && field[0][3] == 1 && field[0][4] == 1 ||
				field[1][0] == 1 && field[1][1] == 1 && field[1][2] == 1 && field[1][3] == 1 && field[1][4] == 1 ||
				field[2][0] == 1 && field[2][1] == 1 && field[2][2] == 1 && field[2][3] == 1 && field[2][4] == 1 ||
				field[3][0] == 1 && field[3][1] == 1 && field[3][2] == 1 && field[3][3] == 1 && field[3][4] == 1 ||
				field[4][0] == 1 && field[4][1] == 1 && field[4][2] == 1 && field[4][3] == 1 && field[4][4] == 1
				)
			{
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (
				field[0][0] == 1 && field[1][0] == 1 && field[2][0] == 1 && field[3][0] == 1 && field[4][0] == 1 ||
				field[0][1] == 1 && field[1][1] == 1 && field[2][1] == 1 && field[3][1] == 1 && field[4][1] == 1 ||
				field[0][2] == 1 && field[1][2] == 1 && field[2][2] == 1 && field[3][2] == 1 && field[4][2] == 1 ||
				field[0][3] == 1 && field[1][3] == 1 && field[2][3] == 1 && field[3][3] == 1 && field[4][3] == 1 ||
				field[0][4] == 1 && field[1][4] == 1 && field[2][4] == 1 && field[3][4] == 1 && field[4][4] == 1)
			{
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (
				field[0][0] == 1 && field[1][1] == 1 && field[2][2] == 1 && field[3][3] == 1 && field[4][4] == 1 ||
				field[4][0] == 1 && field[1][3] == 1 && field[2][2] == 1 && field[3][1] == 1 && field[4][0] == 1
				)
			{
				clear;
				win = false;
				cout << "Победа крестика";
			}
			else if (
				field[0][0] == 2 && field[0][1] == 2 && field[0][2] == 2 && field[0][3] == 2 && field[0][4] == 2 ||
				field[1][0] == 2 && field[1][1] == 2 && field[1][2] == 2 && field[1][3] == 2 && field[1][4] == 2 ||
				field[2][0] == 2 && field[2][1] == 2 && field[2][2] == 2 && field[2][3] == 2 && field[2][4] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 && field[3][4] == 2 ||
				field[3][0] == 2 && field[3][1] == 2 && field[3][2] == 2 && field[3][3] == 2 && field[4][4] == 2 ||

				field[0][0] == 2 && field[1][0] == 2 && field[2][0] == 2 && field[3][0] == 2 && field[4][0] == 2 ||
				field[0][1] == 2 && field[1][1] == 2 && field[2][1] == 2 && field[3][1] == 2 && field[4][1] == 2 ||
				field[0][2] == 2 && field[1][2] == 2 && field[2][2] == 2 && field[3][2] == 2 && field[4][2] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 && field[4][3] == 2 ||
				field[0][3] == 2 && field[1][3] == 2 && field[2][3] == 2 && field[3][3] == 2 && field[4][4] == 2 ||

				field[0][0] == 2 && field[1][1] == 2 && field[2][2] == 2 && field[3][3] == 2 && field[4][4] == 2 ||
				field[4][0] == 2 && field[1][3] == 2 && field[2][2] == 2 && field[3][1] == 2 && field[0][4] == 2

				)
			{
				clear;
				win = false;
				cout << "Победа нолика";
			}
			else if (
				field[0][0] != 0 && field[0][1] != 0 && field[0][2] != 0 && field[0][3] != 0 && field[0][4] != 0 &&
				field[1][0] != 0 && field[1][1] != 0 && field[1][2] != 0 && field[1][3] != 0 && field[1][4] != 0 &&
				field[2][0] != 0 && field[2][1] != 0 && field[2][2] != 0 && field[2][3] != 0 && field[2][4] != 0 &&
				field[3][0] != 0 && field[3][1] != 0 && field[3][2] != 0 && field[3][3] != 0 && field[3][4] != 0 &&
				field[4][0] != 0 && field[4][1] != 0 && field[4][2] != 0 && field[4][3] != 0 && field[4][4] != 0

				)


			{
				clear;
				win = false;
				cout << "Ничья";
			}
		}

	}
}

int main()
{
	setlocale(0, "");
	int select;

	cout << "[+] Игра Крестики-Нолики\n\n";
	cout << "[1] Играть \n";
	cout << "[2] Настройки\n";
	cout << "[3] Правила\n";
	cout << "[+] введите число: ";
	cin >> select;

	switch (select)
	{
	case 1:
		clear;
		play();
		break;
	case 2:
		clear;
		settings();
		break;
	case 3:
		clear;
		rules();
		break;
	default:
		clear;
		main();

		break;
	}


	int _;  cin >> _;
	return 0;
}