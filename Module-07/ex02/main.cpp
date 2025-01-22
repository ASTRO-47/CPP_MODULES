#include "Array.hpp"

int main()
{
    Array<std::string, 5> imad;
    
    imad.fill_case(0, "imad_1");
    imad.show_case(0);
    imad.show_case(8);
    // ::test<std::string>("hello");
}


void f()
{
    throw std::bad_alloc();
}