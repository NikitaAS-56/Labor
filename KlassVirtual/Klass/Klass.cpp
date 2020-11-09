
#include <iostream>
#include"School.h"
#include"Gumnasium.h"

#include"Univer.h"
#include"Institute.h"
using namespace std;
void sw() {
	for (int i = 0; i < 40; i++) {
		cout << '*';
	}
}
int main()
{
	setlocale(0, "");
	university unik(4000,7.9);
	//university unik;
	unik.print();

	cout << endl;
	sw();
	cout << endl;


	institute Inst(3500, 8.3);
	Inst.print();

	cout << endl;
	sw();
	cout << endl;
	  
	school sc(1500, 9.1);
	sc.print();

	cout << endl;
	sw();
	cout << endl;


	gymnasium gm(2000, 9.4);
	gm.print();
}

