#include <iostream> 
using namespace std;
int main() {
	setlocale(0, "");


	cout << "[1] ������ " << endl;
	cout << "[2] ������� " << endl;
	cout << "[3] ���� " << endl;
	cout << "[4] ������ " << endl;
	cout << "[5] ��� " << endl;
	cout << "[6] ���� " << endl;
	cout << "[7] ���� " << endl;
	cout << "[8] ������ " << endl;
	cout << "[9] �������� " << endl;
	cout << "[10] ������� " << endl;
	cout << "[11] ������ " << endl;
	cout << "[12] ������� " << endl << endl;
	cout << "[-] ������� ��������: ";

	int value;
	cin >> value;

	switch (value) {

	case 1:
		cout << "������ ";
		break;
	case 2:
		cout << "������� ";
		break;
	case 3:
		cout << "���� ";
		break;
	case 4:
		cout << "������ ";
		break;
	case 5:
		cout << "��� ";
		break;
	case 6:
		cout << "���� ";
		break;
	case 7:
		cout << "���� ";
		break;
	case 8:
		cout << "������ ";
		break;
	case 9:
		cout << "�������� ";
		break;
	case 10:
		cout << "������� ";
		break;
	case 11:
		cout << "������ ";
		break;
	case 12:
		cout << "������� ";
		break;
	default:
		cout << "��� ������ �������� ";
		break;

	}

	return 0;
}