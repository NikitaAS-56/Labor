#pragma once
#include<string>
using namespace std;

template <class T>
class mass {
private:
	int rasm;
	T* mas;
public:
	mass() {
		rasm = 0;
		cout << endl;
		cout << "������� ���������� ��������� ";
		cin >> rasm;
		mas = new T[rasm];
		cout << "�������� ������";
		for (int i = 0; i < rasm; i++) {
			mas[i] = 1 + rand() % 10;
		}
		for (int i = 0; i < rasm; i++) {
			cout << mas[i] << " ";
		}
		
	}
	void srsn();
	~mass()
	{
		delete[] mas;
	}
};
template <typename T>
	void mass<T>::srsn() {
	 T summ = 0;
		for (int i = 0; i < rasm; i++) {
			summ = summ + mas[i];
		}
		summ = summ / rasm;
		cout <<endl<< "������� �������� " << summ << endl;

	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
T minMas(T* mas, int rasm) {


	T min = mas[0];
	for (int i = 0; i < rasm; i++) {
		if (mas[i] < min)
			min = mas[i];

	}
	cout << " ����������� ��: " << min;
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
T minstr(T* stroka, int n) {
	T minst = stroka[0];
	for (int i = 0; i < n; i++) {
		if (stroka[i].size() < minst.size()) {
			minst = stroka[i];
		}
	}
	cout << "����������� ������ " << minst;
	return minst;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void vvodint()
{

	int rasm;
	cout << "���������� ���������  int = ";
	cin >> rasm;
	int* mas1 = new int[rasm];

	for (int i = 0; i < rasm; i++)
	{
		mas1[i] = 1 + rand() % 5;;
	}
	for (int i = 0; i < rasm; i++)
	{
		cout << mas1[i] << endl;
	}
	minMas(mas1, rasm);

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void vvodchar() {
	int n;

	cout << "vvedite kol strok";
	cin >> n;
	string* stroka = new string[n];
	cout << "������� ������";
	for (int i = 0; i < n; i++) {
		cin >> stroka[i];
	}

	minstr(stroka, n);

}