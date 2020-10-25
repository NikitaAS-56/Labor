#pragma once
#include <iomanip>
#include <stdlib.h>
using namespace std;

class MASS {

protected:
	int rasm1, rasm2;
	int** mas;

public:

	MASS() {
		cout << "vvedite rasmernost= ";
		cin >> rasm1 >> rasm2;

	}

	void vvod() {
		mas = new int* [rasm1];
		for (int i = 0; i < rasm1; i++) {
			mas[i] = new int[rasm2];

			for (int j = 0; j < rasm2; j++) {
				mas[i][j] = rand() % 15 - 10;

			}
		}
	}
	void print() {
		for (int i = 0; i < rasm1; i++) {

			cout << endl;
			for (int j = 0; j < rasm2; j++) {
				cout << setw(6) << mas[i][j];
				cout << " ";
			}
		}
	}
	friend void metod(MASS& mass1);
	~MASS() {
		for (int i = 0; i < rasm1; i++)
			delete[] mas[i];

		delete[] mas;
	}
};