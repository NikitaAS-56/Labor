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

		cout << "������� ���������� ��������� � ������� ����";
		cin >> kolstudent;
		cin>> srball;
	}
	higher(int kol, float ball) : kolstudent(kol), srball(ball) {}

	void NAME(string name) {

		cout <<"�������� ��������� "<< name<<endl;

	}
	void DATE(int date) {

		cout <<"��� ��������= " <<date<<endl;
	}
	
};