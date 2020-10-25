#pragma once
#include<iostream>
using namespace std;
class Carrier {
protected:
	string name;
	int age;
	int cost;
	int x;
public:
	Carrier() {
		name = " ";
		age = 0;
		cost = 0;
		
	}
	void vvodcost() {
		cout << "введите стоимость перевозки= ";
		cin >> cost;
	}
	void printst() {
		cout << "стоимость перевозки ="  << cost << endl;
	}
	int sum() {
		return cost;
	}
	void vvod() {
		cout << endl;
		cout << "введите название грузоперевозчика: ";
		cin >> name;
		cout << endl << "введите год создания:";
		cin >> age;
		cout << endl;
	}
	void print() {
		cout << "название фирмы грузоперевозчика: ";
		cout << name;
		cout << endl;
		cout << "год создания:";
		cout << age;
		
	}
	~Carrier() {
	}
};