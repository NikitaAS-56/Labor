#pragma once
#include <iostream>
#include"Header.h"
using namespace std;

class middle :public Institution
{
protected:
	float srball;
	int kolstudent;
	string name;
	int date;
	int kol_awards;

public:
	middle() {
		cout << "������� ���";
		cin >> srball;
		cout << "��� ���������";
		cin >> kolstudent;
	
	}
	middle(int kol, float ball) : kolstudent(kol), srball(ball) {}

	void NAME(string name) {

		cout << "�������� �������� ���������" << name << endl;

	}
	void DATE(int date) {

		cout << " ��� �������� "<< date << endl;
	}
	
};