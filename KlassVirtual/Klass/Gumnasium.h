#pragma once
#include"Middle.h"
class  gymnasium :public middle
{
public:
	gymnasium(int kol, float ball, int awards1 = 75) :middle(kol, ball) {

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

		NAME("�������� �1");
		DATE(2005);
		cout << "���������� ������ �������� ���������= "<< kol_awards << endl;
		cout <<"������� ��� ��������= " <<srball <<endl;
		cout << "���������� ���������= "<< kolstudent;
		cout << endl;

	};
};