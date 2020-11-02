#include"Header.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> Vect1;
	vector<int> Vect2;
	vector<int> Vect3;
	setlocale(0, "");
	int n, k,l;
	cout << "n= ";
	cin >> n;
	cout << endl;
	number1(n, Vect3);
	cout<<endl << "сортировка и подсчет количества перестановок " << endl;
	number2(Vect3);
	str();

	cout <<endl<< "задание 2 "<<endl<<"l= ";
	cin >> l;


	auto fun2 = [&](int l) {

		for (int i = 0; i < l; i++)
			Vect1.push_back(i);

	};
	
	fun2(l);
	print(Vect1);

	cout << endl << "k= ";
	cin >> k;

	auto fun3 = [&](int l,int k) {
		for ( int i=k ; i <k+l; i++)
			Vect2.push_back(i);
		
	};
	fun3(l,k);
	print(Vect2);

	
}












