#pragma once
#include"Middle.h"
class  school :public middle
{
public:
	school(int kol, float ball, int awards1 =39) :middle(kol, ball) {

		kol_awards = awards1;
	}

	void sbal(float bal)
	{
		srball = bal;
	};
	void student(int kol)
	{
		kolstudent = kol;
	};
	int getstudent() {

		return kolstudent;
	};

	float getbal() {
		return srball;

	};


	void print() {

		NAME("СШ №1");
		DATE(1973);
		cout << "количество наград учебного заведения= " << kol_awards << endl;
		cout << "средний бал учеников= " << srball << endl;
		cout << "количество студентов= " << kolstudent<<endl;
		cout << endl;
	};
};
