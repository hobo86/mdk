#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color 05");
	setlocale(0, "");

	cout << "[1]��������� \"-�������������� ������\"\n\n";
	cout << "[+] �������� ������: \n";
	cout << "[1] �����\n";
	cout << "[2] �������\n";
	cout << "[3] �������������\n";
	cout << "[4] �����������\n";
	cout << "[5] K���� \n";
	cout << "[6] ���� \n\n";
	cout << "[+] �������� �����:  ";


	int menu;
	cin >> menu;

	switch (menu) {
	case 1:
		system("cls");
		system("color 06");
		cout << "[+] ������: �����\n\n";
		cout << "[1] ��������������\n";
		cout << "[2] ������������\n\n";
		cout << "[+] �������� ���: ";


		int line;
		cin >> line;
		switch (line) {
		case 1: {
			system("color 0B");
			system("cls");
			cout << "[+] �� ������� �������������� ���\n\n";
			cout << "[+] ����� �����: ";
			int num;
			cin >> num;
			system("cls");
			cout << "[+] �������� �����: ";
			char tex;
			cin >> tex;
			system("cls");
			int a = 0;
			system("cls");
			while (a <= num) {
				cout << tex;
				a++;
			}
			Sleep(4000);
			system("cls");
			main();
			break;
		}
		case 2: {
			system("color 0B");
			system("cls");
			cout << "[+] �� ������� ������������ ���\n\n";
			cout << "[+] ����� �����: ";
			int num;
			cin >> num;
			system("cls");
			cout << "[+] �������� �����: ";
			char tex;
			cin >> tex;
			system("cls");
			int a = 0;
			system("cls");
			while (a <= num) {
				cout << tex << endl;
				a++;
			}
			Sleep(4000);
			system("cls");
			main();
			break;
		}
			  break;
		default:
			system("color 0C");
			system("cls");
			cout << "I don't understend  zhiesty";
			Sleep(3000);
			system("cls");
			main();
			break;
		}
	case 2: {
		system("color 0A");
		system("cls");
		cout << "[+] ������: �������\n\n";
		cout << "[1] ������\n";
		cout << "[2] ������\n\n";
		cout << "[+] �������� ���: ";
	}
		  int bob;
		  cin >> bob;
		  switch (bob) {
		  case 1: {
			  system("color 0E");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������ ��������: ";
			  int num;
			  cin >> num;
			  system("cls");
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int x = 0; x < num; x++) {
				  for (int y = 0; y < num; y++) {
					  cout << tex << " ";
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("color 0E");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������ ��������: ";
			  int num;
			  cin >> num;
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < num; y++) {
				  for (int x = 0; x < num; x++) {
					  Sleep(10);
					  if (y == 0 || y == num - 1 || x == 0 || x == num - 1) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("color 0C");
			  system("cls");
			  cout << "I don't understend  zhiesty";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;

		  }
	case 3: {
		system("color 0A");
		system("cls");
		cout << "[+] ������: �������������\n\n";
		cout << "[1] ������\n";
		cout << "[2] ������\n\n";
		cout << "[+] �������� ���: ";
	}

		  int rectangle;
		  cin >> rectangle;
		  switch (rectangle) {
		  case 1: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������ ��������������: ";
			  int height;
			  cin >> height;
			  system("cls");
			  cout << "[+] ������ ��������������: ";
			  int width;
			  cin >> width;
			  system("cls");
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < height; y++) {
				  for (int x = 0; x < width; x++) {
					  cout << tex << " ";
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������ ��������������: ";
			  int height;
			  cin >> height;
			  system("cls");
			  cout << "[+] ������ ��������������: ";
			  int width;
			  cin >> width;
			  system("cls");
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < height; y++) {
				  for (int x = 0; x < width; x++) {
					  Sleep(10);
					  if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("color 0C");
			  system("cls");
			  cout << "I don't understend  zhiesty";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;
		  }
	case 4: {
		system("color 0A");
		system("cls");
		cout << "[+] �� ������� �����������\n\n";
		cout << "[1] ������ \n";
		cout << "[2] ������ \n\n";
		cout << "[+] �������� ���: ";
	}

		  int treangle;
		  cin >> treangle;
		  switch (treangle) {
		  case 1: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������: ";
			  int size;
			  cin >> size;
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int i = 0; i < size; i++)
			  {
				  for (int j = 0; j < size - i; j++)
					  cout << " ";
				  for (int j = size - i; j < size + i; j++)
					  cout << tex;
				  for (int j = size + i + 1; j < size * 2; j++)
					  cout << " ";
				  cout << "\n";
			  }
			  break;
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] �� ������� ������ ���\n\n";
			  cout << "[+] ������: ";
			  int size;
			  cin >> size;
			  system("cls");
			  cout << "[+] �������� �����: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < size; y++) {
				  for (int x = 0; x < size; x++) {
					  if (x == (size / 2) + y || x == (size / 2) - y || y == size / 2) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  break;
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("color 0C");
			  system("cls");
			  cout << "I don't understend  zhiesty";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;
		  }
	case 5: {
		cout << "�� ������� �����";
		system("color 0A");
		system("cls");
		cout << "������ ����� (���������� ��������): ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] �������� �����: ";
		char tex;
		cin >> tex;
		system("cls");
		for (int x = 0; x < num; x++) {
			for (int y = 0; y < num; y++) {
				if (x == y || num - x == y + 1) {
					cout << tex << " ";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	}
	case 6: {
		cout << "�� ������� ����";
		system("color 0A");
		system("cls");
		cout << "������ ����� : ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] �������� �����: ";
		char tex;
		cin >> tex;
		system("cls");
		for (int y = 0; y < num; y++) {
			for (int x = 0; x < num; x++) {
				if (y == num / 2 || x == num / 2) {
					cout << tex << " ";
				}
				else {
					cout << " .";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	}
	/*case 7: {
		cout << "�� ������� �������";
		system("color 0A");
		system("cls");
		cout << "������ ����� : ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] �������� �����: ";
		char tex;
		cin >> tex;
		system("cls");
		for (int y = 0; y < num; y++) {
			for (int x = 0; x < num; x++) {
				if (y == num % 2 || x == num % 2) {
					cout << tex << " ";
				}
				else {
					cout << " .";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	}*/
	default:
		system("color 0C");
		system("cls");
		cout << "I don't understend  zhiesty";
		Sleep(3000);
		system("cls");
		main();
		break;
	}

	return 0;


}

