#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> Vect) {
	for_each(Vect.begin(), Vect.end(), [](int n)
		{
			cout << n << " ";
		});
	cout << endl;
}

void  number1(int n, vector<int>& Vect3) {

	for (int val = 0; val < n; val++)
	{
		Vect3.push_back(1 + rand() % 20);
	}
	cout << "вывод элементов вектора " << endl;
	print(Vect3);
}


void number2(vector<int>& Vect3) {
	int kol = 0;
	sort(Vect3.begin(), Vect3.end(), [&](int a, int b) { return ++kol, a > b; });
	cout << "количество = " << kol << endl;
	print(Vect3);
	cout << endl;
}
auto str = []() {
	cout << endl;
	cout << "введите строку  ";
	string str, str1;
	cin >> str;
	cout << "введите подстроку   ";
	cin >> str1;
	int pos = str.find(str1);
	cout << pos;
};