#include "whatever.hpp"

// RTTI : run time type informations

int main()
{  
    int _42 = 42;
    int second = 1337;
    const int *test = &_42;
    // *((int *)test) = 3;

    std::cout << _42 << std::endl;
    int * else_ = const_cast<int*>(test);
}
