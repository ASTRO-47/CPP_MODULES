#include "Span.hpp"


int main()
{
    Span sp = Span(4);
    sp.addNumber(-9);
    sp.addNumber(-7);
    sp.addNumber(-5);
    sp.addNumber(-349);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}


// -9
// -7
// -5
// -346


// 6
// 5
// 7
// 8
// 767

// -349
// -9
// -7
// -5