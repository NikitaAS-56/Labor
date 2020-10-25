
#include <iostream>
#include"Header.h"


void metod(MASS&mass1) {
	int k=0;
	for (int j =0; j < mass1.rasm2; j++) {
		k = 0;
		for (int i = 0; i < mass1.rasm1; i++) {
			if (mass1.mas[i][j] < 0) k++;
			if (k == mass1.rasm1) cout << " number= " << j+1;
		}
		
	}
}
int main()
{
	MASS mass1;
	mass1.vvod();
	mass1.print();
	cout <<endl;
	metod(mass1);
	cout << endl;
	system("pause");
	return 0;
}

