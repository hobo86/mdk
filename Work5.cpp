#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	system("color 0B");
	setlocale(0, "");

	cout << "[+] ����������\n\n";
	cout << "[1] ������� �����\n";
	cout << "[2] ���������� �����\n";
	cout << "[3] �����\n";

	int menu;
	cin >> menu;

	switch (menu) {
	case 1:
		system("cls");
		system("color 06");
		cout << "[+] ���������� RU \n\n";
		cout << "[1] ������\n";
		cout << "[2] �������\n";
		cout << "[3] ������\n";
		cout << "[4] �������\n";
		cout << "[5] �����\n";
		cout << "[6] �������\n";
		cout << "[7] �����\n";
		cout << "[8] ��������\n";
		cout << "[9] ������\n";
		cout << "[10] ����\n";
		cout << "[11] ������\n";
		cout << "[12] ������\n";
		cout << "[13] �����\n";
		cout << "[14] ����\n";
		cout << "[15] ������\n";

		int RU;
		cin >> RU;
		switch (RU) {
		case 1:
			system("cls");
			cout << "\n[1] Road\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 2:
			system("cls");
			cout << "\n[2] Bear\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 3:
			system("cls");
			cout << "\n[3] Gans\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 4:
			system("cls");
			cout << "\n[4] Phone\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 5:
			system("cls");
			cout << "\n[5] Gang\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 6:
			system("cls");
			cout << "\n[6] Notebook\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 7:
			system("cls");
			cout << "\n[7] War\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 8:
			system("cls");
			cout << "\n[8] College\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 9:
			system("cls");
			cout << "\n[9] Car\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 10:
			system("cls");
			cout << "\n[10] Chain\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 11:
			system("cls");
			cout << "\n[11] Securite\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 12:
			system("cls");
			cout << "\n[12] Counrty\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 13:
			system("cls");
			cout << "\n[13] Combat\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 14:
			system("cls");
			cout << "\n[14] Zero\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 15:
			system("cls");
			cout << "\n[15] Death\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		}
	case 2:
		system("cls");
		system("color 05");
		cout << "[+] ���������� EN \n\n";
		cout << "[1] Road\n";
		cout << "[2] Bear\n";
		cout << "[3] Gans\n";
		cout << "[4] Phone\n";
		cout << "[5] Gans\n";
		cout << "[6] Notebook\n";
		cout << "[7] War\n";
		cout << "[8] College\n";
		cout << "[9] Car\n";
		cout << "[10] Chain\n";
		cout << "[11] Securite\n";
		cout << "[12] Country\n";
		cout << "[13] Combat\n";
		cout << "[14] Zero\n";
		cout << "[15] Death\n";

		int EN;
		cin >> EN;

		switch (EN) {
		case 1:
			system("cls");
			cout << "\n[1] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 2:
			system("cls");
			cout << "\n[2] �������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 3:
			system("cls");
			cout << "\n[3] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 4:
			system("cls");
			cout << "\n[4] �������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 5:
			system("cls");
			cout << "\n[5] �����\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 6:
			system("cls");
			cout << "\n[6] �������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 7:
			system("cls");
			cout << "\n[7] �����\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 8:
			system("cls");
			cout << "\n[8] ��������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 9:
			system("cls");
			cout << "\n[9] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 10:
			system("cls");
			cout << "\n[10] ����\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 11:
			system("cls");
			cout << "\n[11] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 12:
			system("cls");
			cout << "\n[12] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 13:
			system("cls");
			cout << "\n[13] �����\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 14:
			system("cls");
			cout << "\n[14] ����\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		case 15:
			system("cls");
			cout << "\n[15] ������\n";
			Sleep(4000);
			system("cls");
			main();
			break;
		}
	case 3:
		return 0;
		break;
	default:
		system("cls");
		cout << "��������� ������� �����!";
		Sleep(4000);
		break;
	}


	return 0;
}
