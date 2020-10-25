#pragma once
#pragma once
#ifndef  Header_H
#define  Header_H
#include <math.h>
#include <iostream>

class  Vektor
{
private:
    int* mas;
    int size;
public:


    Vektor() {

        size = 0;

    }
    void get();
    void set();
    void samena();
    void sort1();
    ~Vektor()
    {
        delete[] mas;
    }
};
#endif
