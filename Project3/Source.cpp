
#include "Header.h"

using namespace std;


void Vektor::get() {
    cout << "������� ����������� ������= ";
    cin >> size;
    mas = new int[size];
    cout << "������� �������� ������: ";
    for (int j = 0; j < size; j++) {

        cin >> mas[j];

    }

}
void Vektor::set() {
    cout << "\n" << "��������� �����= ";
    for (int j = 0; j < size; j++) {

        cout << mas[j] << ",";
    }
}
void Vektor::samena() {
    double sqr;
    cout << "����� ������ ������= ";
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0) {
            sqr = sqrt(mas[i]);
            cout << sqr << " ";
        }
    };

}

void Vektor::sort1() {
    int temp;
    double srsn;
    int max = 0;
    double summ = 0;
    for (int i = 0; i < size; i++) {
        summ += mas[i];

    }
    srsn = summ / size;
    cout << "c������ ��������= " << srsn;

    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
        }
    }
    cout << endl << "��������������� :";
    for (int i = 0; i < size; i++) {
        cout << mas[i];
        max = mas[i];
    }
    int min = mas[0];
    cout << endl;
    cout << "�����������=  " << mas[0] << endl;

    cout << "������������= " << max;

}



int main()
{
    setlocale(LC_ALL, "rus");
    Vektor mas1;
    Vektor mas2;

    mas1.get();
    cout << endl;
    mas1.set();
    cout << endl;
    mas1.sort1();
    cout << endl;
    mas2.get();
    cout << endl;
    mas2.set();
    cout << endl;
    mas2.samena();
    cout << endl;
    return 0;

}
