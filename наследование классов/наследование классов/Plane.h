#pragma once
#include<iostream>
#include"Carrier.h"

using namespace std;

class Plane : public Carrier {
protected:
	int kol_pos;
public:
	
	Plane(): Carrier(){
		kol_pos = 0;
	}
	void vvodkol(int k) {
		kol_pos = k;
	}
	void print_kol() {
		cout << "количество человек" << kol_pos << "человек";
	}
	
	~Plane() {
	}
};