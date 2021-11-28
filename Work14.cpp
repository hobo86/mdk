#include <iostream> 
using namespace std;
int main() {
	setlocale(0, "");
	const int size = 10;
	int m1[size] = { 0,1,2,3,4,5,6,7,8,9,
	};
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "]" << m1[i] << "\n\n";
	}
	const int size1 = 10;
	long m2[size1] = { 0,1,2,3,4,5,6,7,8,9,
	};
	for (int i = 0; i < size1; i++) {
		cout << "[" << i + 1 << "]" << m2[i] << "\n\n";
	}
	const int size2 = 10;
	short m3[size2] = { 0,1,2,3,4,5,6,7,8,9
	};
	for (int i = 0; i < size2; i++) {
		cout << "[" << i + 1 << "]" << m3[i] << "\n\n";
	}
	const int size3 = 10;
	float m4[size3] = { 0,1,2,3,4,5,6,7,8,9
	};
	for (int i = 0; i < size3; i++) {
		cout << "[" << i + 1 << "]" << m4[i] << "\n\n";
	}
	const int size4 = 10;
	double m5[size4] = { 0,1,2,3,4,5,6,7,8,9
	};
	for (int i = 0; i < size4; i++) {
		cout << "[" << i + 1 << "]" << m5[i] << "\n\n";
	}
	const int size5 = 10;
	char m6[size5] = { 'q','e','t','y','u','t','u','o','k','g'
	};
	for (int i = 0; i < size5; i++) {
		cout << "[" << i + 1 << "]" << m6[i] << "\n\n";
	}
	const int size6 = 10;
	bool m7[size6] = { true,false,true,false,true,false,true,false,true,false
	};
	for (int i = 0; i < size6; i++) {
		cout << "[" << i + 1 << "]" << m7[i] << "\n\n";
	}
	const int size7 = 10;
	string m8[size7] = { "sasuke","naruto","nagato","uzumaki","itachi","minato","kagua","kavaki","boruto","hokage"
	};
	for (int i = 0; i < size7; i++) {
		cout << "[" << i + 1 << "]" << m8[i] << "\n\n";
	}
	return 0;
}