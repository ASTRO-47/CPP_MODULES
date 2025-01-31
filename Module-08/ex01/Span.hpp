#pragma once

#include <iostream>
#include <vector>
using namespace std;
class Span
{
private:
    unsigned int max;
    std::vector<int> _array;
    Span();
public:
    Span(unsigned int);
    Span(const Span &);
    Span& operator=(const Span &);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    ~Span();
} ;
