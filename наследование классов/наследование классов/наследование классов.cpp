#include<iostream>
#include"Carrier.h"
#include"Car.h"
#include"Plane.h"
#include"Train.h"

using namespace std;


int main() {
	
	setlocale(0, "");
	double summ = 0;
	int x;
	cout << "введите количество видо перевозки(3)=  ";
	cin >> x;
	if (x == 3) {
		Car Tesla;
		Plane Boing;
		Train tutu;

		tutu.vvod();
		tutu.vvodcost();
		tutu.printst();
		tutu.ticket(16);
		tutu.print_ticket();

		Tesla.vvod();
		Tesla.vvodcost();
		Tesla.printst();
		Tesla.vvodmassa(1500);
		Tesla.print_massa();

		Boing.vvod();
		Boing.vvodcost();
		Boing.printst();
		Boing.vvodkol(210);
		Boing.print_kol();

		summ = (Tesla.sum() + tutu.sum() + Boing.sum()/x);
		cout << "средняя стоимость перевозки всего транспорта " << summ;
	}
	else return 0;
}