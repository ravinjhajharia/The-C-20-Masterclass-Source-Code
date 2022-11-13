#ifndef COMPLEX_NUMBER
#define COMPLEX_NUMBER

#include<iostream>
#include "CustomUniquePointer.h"

class ComplexNumber{
    
public:
    ComplexNumber() = delete;
    ComplexNumber(int a, int b);
    ComplexNumber(const ComplexNumber &c);
    ~ComplexNumber() = default;
    int getX() const;
    int getY() const;
    void print() const;

private:
    CustomUniquePointer x{};
    CustomUniquePointer y{};
};

#endif