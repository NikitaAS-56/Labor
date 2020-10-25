#pragma once
#include<iostream>
#include"Carrier.h"
using namespace std;

class Car :public Carrier {
protected:
	int massa;
public:
	
	Car() : Carrier() {
	   massa = 0;
	}

	void vvodmassa(int k) {
		massa = k;
	}
	void print_massa() {
		cout << "масса " << massa << "кг";
	}
	
	~Car() {
	}
};