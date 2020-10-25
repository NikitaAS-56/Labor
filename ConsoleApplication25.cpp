#include <iostream>
using namespace std;


class stroka
{
private:
    char  mas[256];
    int k;

public:
    stroka() :mas(),k(0){}

    void st() {
        cout << " mas= ";
        cin.getline(mas, 256);
    }
    void star() {
        for (int c = 0; mas[c] != 0; c++) {
            for (int i = c; mas[i] != 0; i++)
            {
                if (mas[i] == ' ') {
                    for (int j = i + 1; j < mas[j] != 0; j++) {
                        if (mas[j] == ',') {
                            k++;
                            mas[j] = '!';
                        }
                    }
                }
            }
        }
        
    }
    void print() {
        for (int i = 0; mas[i] != 0; i++) {
            cout << mas[i];
        }
        cout <<"kol ravno= "<< k;
    }
    ~stroka() {}
};
int main()
{
    stroka str1;
    str1.st();
   str1.star();
    str1.print();


}