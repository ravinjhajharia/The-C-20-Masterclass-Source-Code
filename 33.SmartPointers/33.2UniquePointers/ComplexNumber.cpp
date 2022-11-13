
#include "ComplexNumber.h"
#include "CustomUniquePointer.h"

 ComplexNumber::ComplexNumber(int a, int b): 
    x{a},
    y{b}
{
//    x = a;
//    y = b;
    std::cout << "ComplexNumber parameterized ctr called." << std::endl;
}

ComplexNumber::ComplexNumber(const ComplexNumber &c): 
    ComplexNumber(c.getX(), c.getY())
{
    std::cout << "ComplexNumber copy ctr called." << std::endl;
}

int ComplexNumber::getX() const{
    return *(x.get());
}

int ComplexNumber::getY() const{
    return *(y.get());
}

void ComplexNumber::print() const{
    std::cout << "Complex: [ " << this->getX() << " + i{" << this->getY() << "}]" << std::endl;
}


int main(){
    ComplexNumber c1(10, 12);
    c1.print();

    ComplexNumber c2{c1};
    c2.print();
    return 0;
}