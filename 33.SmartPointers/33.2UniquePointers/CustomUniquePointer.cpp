#include "CustomUniquePointer.h"


CustomUniquePointer::CustomUniquePointer(int data){
    std::cout << "CustomUniquePointer ctr called." << std::endl;
    this->data = new int{data};
 }


 CustomUniquePointer::~CustomUniquePointer(){
    std::cout << "CustomUniquePointer dctr called." << std::endl;
    delete data;
 }


void CustomUniquePointer::print() const{
    std::cout << "[ " << *data << " ]" << std::endl;
}


int* CustomUniquePointer::get() const{
    return data;
}

void CustomUniquePointer::reset(){
    this->data = nullptr;
}
#if 0
CustomUniquePointer::CustomUniquePointer(CustomUniquePointer &&ptr):
    data{ptr.data}
{
    std::cout << "CustomUniquePointer move ctr called." << std::endl;
    ptr.data = nullptr;
}
#endif

#if 0
int main(){
    CustomUniquePointer ptr{5};
    CustomUniquePointer smartptr{CustomUniquePointer {10}};
    smartptr.print();

    CustomUniquePointer p1{};
    p1 = 10;
    p1.print();

    //CustomUniquePointer newptr = smartptr;
    return 0;
}
#endif