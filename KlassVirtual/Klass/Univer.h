#pragma once
#include"Higher.h"

class university :public higher
{

public:
	university( string cost1 = "1200$") :higher() {

		cost = cost1;
	}

	university(int kol, float ball,string cost1="1200$") :higher(kol, ball) {

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
	
		NAME("BSTU");
		DATE(1978);
	
		cout << "стоимость учебы= " << cost << endl;
		cout << "средний бал студентов= " << srball <<endl;
		cout << "количество студентов=  " << kolstudent;
		cout << endl;

	
	};

};