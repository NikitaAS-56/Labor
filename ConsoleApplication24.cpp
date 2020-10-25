#include <iostream>
using namespace std;


class stroka
{
private:
    char mas[256];
 

public:
    stroka() :mas(),k(0) {}

    void st() {
        cout << " mas= ";
        cin >> mas;
    }
    void star() {
        char  tmp;
        for (int i = 0; mas[i] != 0; i++) {
             tmp = mas[i];
        }
       
        for (int i = 0; mas[i] != 0; i++) 
        {
            if (mas[i] == 'a') {
                mas[i] = tmp;
            }
        }
    }
    void print() {
        for (int i = 0; mas[i] != 0; i++) {
            cout << mas[i];
        }
        
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
