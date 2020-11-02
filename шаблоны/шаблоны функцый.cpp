#include <iostream>
#include<string>
#include"Header.h"


using namespace std;
int main()
{
	setlocale(0, "");
	mass<int> intArray;
	mass<double> doubleArray;
	intArray.srsn();

	doubleArray.srsn();

	cout << endl;
	vvodint();
	cout << endl;
	vvodchar();
	return 0;
}
