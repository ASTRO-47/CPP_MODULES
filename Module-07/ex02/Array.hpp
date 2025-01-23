#pragma once

// template are used and determined at compile time 
// 4. Non-Type Template Parameters

#include <iostream>

template <typename T>
class Array
{
private:  
    //
    T   *arr;
    size_t size_;
public:
    Array();


} ;

template <typename T>
void test(T data)
{
    (void)data;
    static int i = 0;
    std::cout << i++ << std::endl;
}


