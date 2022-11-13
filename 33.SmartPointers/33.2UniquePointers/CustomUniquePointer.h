#ifndef CUSTOM_UNIQUE_POINTER
#define CUSTOM_UNIQUE_POINTER
#include<iostream>


class CustomUniquePointer{
    public:
        CustomUniquePointer() = default;
        explicit CustomUniquePointer(int data);
        CustomUniquePointer(const CustomUniquePointer &ptr) = delete;
        //CustomUniquePointer(CustomUniquePointer &&ptr);
        void reset();
        ~CustomUniquePointer();
        void print() const;
        int*  get() const;

    private:
        int *data{nullptr};
};
#endif