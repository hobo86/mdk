#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color 05");
	setlocale(0, "");

	cout << "[1]Программа \"-Геометрические фигуры\"\n\n";
	cout << "[+] ВЫберите фигуру: \n";
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Kрест \n";
	cout << "[6] Плюс \n\n";
	cout << "[+] Выберите число:  ";


	int menu;
	cin >> menu;

	switch (menu) {
	case 1:
		system("cls");
		system("color 06");
		cout << "[+] Фигура: Линия\n\n";
		cout << "[1] Горизонтальная\n";
		cout << "[2] Вертикальная\n\n";
		cout << "[+] Выберити тип: ";


		int line;
		cin >> line;
		switch (line) {
		case 1: {
			system("color 0B");
			system("cls");
			cout << "[+] Вы выбрали горизантальный тип\n\n";
			cout << "[+] Длина линии: ";
			int num;
			cin >> num;
			system("cls");
			cout << "[+] Текстура линии: ";
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
			cout << "[+] Вы выбрали вертикальный тип\n\n";
			cout << "[+] Длина линии: ";
			int num;
			cin >> num;
			system("cls");
			cout << "[+] Текстура линии: ";
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
		cout << "[+] Фигура: Квадрат\n\n";
		cout << "[1] Полный\n";
		cout << "[2] Пустой\n\n";
		cout << "[+] Выберити тип: ";
	}
		  int bob;
		  cin >> bob;
		  switch (bob) {
		  case 1: {
			  system("color 0E");
			  system("cls");
			  cout << "[+] Вы выбрали полный тип\n\n";
			  cout << "[+] Размер квадрата: ";
			  int num;
			  cin >> num;
			  system("cls");
			  cout << "[+] Текстура линии: ";
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
			  cout << "[+] Вы выбрали пустой тип\n\n";
			  cout << "[+] Размер квадрата: ";
			  int num;
			  cin >> num;
			  cout << "[+] Текстура линии: ";
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
		cout << "[+] Фигура: Прямоугольник\n\n";
		cout << "[1] Полный\n";
		cout << "[2] Пустой\n\n";
		cout << "[+] Выберити тип: ";
	}

		  int rectangle;
		  cin >> rectangle;
		  switch (rectangle) {
		  case 1: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] Вы выбрали полный тип\n\n";
			  cout << "[+] Высота прямоугольника: ";
			  int height;
			  cin >> height;
			  system("cls");
			  cout << "[+] Ширина прямоугольника: ";
			  int width;
			  cin >> width;
			  system("cls");
			  cout << "[+] Текстура линии: ";
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
			  cout << "[+] Вы выбрали полный тип\n\n";
			  cout << "[+] Высота прямоугольника: ";
			  int height;
			  cin >> height;
			  system("cls");
			  cout << "[+] Ширина прямоугольника: ";
			  int width;
			  cin >> width;
			  system("cls");
			  cout << "[+] Текстура линии: ";
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
		cout << "[+] Вы выбрали треугольник\n\n";
		cout << "[1] Полный \n";
		cout << "[2] Пустой \n\n";
		cout << "[+] Выберите тип: ";
	}

		  int treangle;
		  cin >> treangle;
		  switch (treangle) {
		  case 1: {
			  system("color 2F");
			  system("cls");
			  cout << "[+] Вы выбрали пустой тип\n\n";
			  cout << "[+] Размер: ";
			  int size;
			  cin >> size;
			  cout << "[+] Текстура линии: ";
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
			  cout << "[+] Вы выбрали пустой тип\n\n";
			  cout << "[+] Размер: ";
			  int size;
			  cin >> size;
			  system("cls");
			  cout << "[+] Текстура линии: ";
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
		cout << "Вы выбрали крест";
		system("color 0A");
		system("cls");
		cout << "Ведите число (Желательно нечётное): ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] Текстура линии: ";
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
		cout << "Вы выбрали Плюс";
		system("color 0A");
		system("cls");
		cout << "Ведите число : ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] Текстура линии: ";
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
		cout << "Вы выбрали решётку";
		system("color 0A");
		system("cls");
		cout << "Ведите число : ";
		int num;
		cin >> num;
		system("cls");
		cout << "[+] Текстура линии: ";
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

