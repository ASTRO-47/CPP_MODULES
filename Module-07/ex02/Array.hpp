#pragma once


// template are used and determined at compile time 
// 4. Non-Type Template Parameters


#include <iostream>

template <typename T, int size>
class Array
{
private:  
    //
public:
    T arr[size];
    void set_value(T data)
    {
        for(int i = 0;i < size;i++)
        {
            arr[i] = data;
        }
    }
    void display()
    {
        for (int i = 0;i<size;i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }
} ;

template <typename T>

void test(T data)
{
    (void)data;
    static int i = 0;
    std::cout << i++ << std::endl;
}

