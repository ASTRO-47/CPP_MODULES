#pragma once

#include <iostream>



template <typename t> void swap(t &arg1, t &arg2)
{
    t tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;        
}


template <typename t_> t_ min(t_ &arg1, t_ &arg2)
{
    if (arg1 >= arg2)
        return arg2;
    else
        return arg1;
}


template <typename t_> t_ max(t_ &arg1, t_ &arg2)
{
    if (arg1 <= arg2)
        return arg2;
    else
        return arg1;
}


// template <typename he>

template <typename data> 

void print(data arge)
{
    std::cout << arge << std::endl;
}