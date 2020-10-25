#include <iostream>
using namespace std;


class stroka
{
private:
    char mas[256];

public:
    stroka() : mas() {}

    void st() {
        cout << " mas= ";
        cin >> mas;
    }
    void star() {

        for (int i = 0; mas[i] != 0; i++) {
            if (mas[i] == mas[i + 1]) {
                mas[i] = '*';
                mas[i + 1] = '*';
            }
        }
    }
    void print() {
        for (int i = 0; mas[i] != 0; i++) {
            cout << mas[i];
        }
    }
    ~stroka(){}
};
int main()
{
    stroka str1;
    str1.st();
    str1.star();
    str1.print();

    stroka* strok = new stroka;
    delete strok;
}