#pragma once
#include <iostream>
#include <string.h>
#include"Header.h"
using namespace std;
class higher :public Institution
{
protected:
	float srball;
	int kolstudent;
	string cost;
	string name;
	int date;
public:
	higher() {

		cout << "введите количество студентов и средний балл";
		cin >> kolstudent;
		cin>> srball;
	}
	higher(int kol, float ball) : kolstudent(kol), srball(ball) {}

	void NAME(string name) {

		cout <<"название заведения "<< name<<endl;

	}
	void DATE(int date) {

		cout <<"год создания= " <<date<<endl;
	}
	
};