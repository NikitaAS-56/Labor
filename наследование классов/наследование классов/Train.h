#pragma once
#include<iostream>
#include"Carrier.h"
using namespace std;

class Train : public Carrier {
protected:
	int ticket_price;
public:

	Train() : Carrier(){
		ticket_price=0;
	}
	

	void ticket(int k) {
		ticket_price = k;
	}
	void print_ticket() {
		cout <<"стоимость билета" <<ticket_price <<"$";
	}



	~Train() {
	}
};
