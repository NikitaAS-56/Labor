#pragma once
#include"Higher.h"
class institute :public higher
{
public:
	institute(int kol, float ball, string cost1 = "3200$") :higher(kol, ball) {

		cost = cost1;
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

		NAME("�������� ������� ���");
		DATE(2004);
		cout << "��������� �����= " << cost << endl;
		cout << "������� ��� ���������= " << srball << endl;
		cout << "���������� ���������=  " << kolstudent;
		cout << endl;


	};

};