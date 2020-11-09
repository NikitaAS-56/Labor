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
		cout << "средний бал";
		cin >> srball;
		cout << "кол студентво";
		cin >> kolstudent;
	
	}
	middle(int kol, float ball) : kolstudent(kol), srball(ball) {}

	void NAME(string name) {

		cout << "название учебного заведения" << name << endl;

	}
	void DATE(int date) {

		cout << " год создания "<< date << endl;
	}
	
};