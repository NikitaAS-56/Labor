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
		cout << "������� ��������� ���������= ";
		cin >> cost;
	}
	void printst() {
		cout << "��������� ��������� ="  << cost << endl;
	}
	int sum() {
		return cost;
	}
	void vvod() {
		cout << endl;
		cout << "������� �������� ����������������: ";
		cin >> name;
		cout << endl << "������� ��� ��������:";
		cin >> age;
		cout << endl;
	}
	void print() {
		cout << "�������� ����� ����������������: ";
		cout << name;
		cout << endl;
		cout << "��� ��������:";
		cout << age;
		
	}
	~Carrier() {
	}
};