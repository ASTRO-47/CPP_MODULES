#pragma once

#include <iostream>

template <typename T, int size>
class Array
{
private:
    T data[size];
public:
    // Array(T d, int size): data(d){};
    void display()
    {
        for (int i = 0;i < size;i++)
            std::cout << data[i] << std::endl;
    }
    void fill_case(int start, T data_)
    {   
        data[start] = data_;
    }
    void show_case(int pos)
    {
        std::cout << data[pos] << std::endl;
    }
} ;

template<class D>

void test(D t)
{
    std::cout << t << std::endl;
}