#pragma once

#include <iostream>

template<typename N>
void print(N &arg)
{
    std::cout << arg  << std::endl;
}

template<typename T, typename M>
void iter(T *addr, std::size_t length, M func)
{
    for (size_t i = 0; i < length; i++)
    {
        func(addr[i]);
    }
}
