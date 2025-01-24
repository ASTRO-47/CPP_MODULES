#pragma once

#include <iostream>


template<typename M>
void print(M arg)
{
    std::cout << arg << std::endl;
}

template<typename T, typename M>
void iter(T *addr, std::size_t length, void (*func)(M))
{
    for (size_t i = 0; i < length; i++)
    {
        func(addr[i]);
    }
}
