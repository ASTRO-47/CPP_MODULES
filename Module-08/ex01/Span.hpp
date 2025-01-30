#pragma once

#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int max;
    std::vector<int> array;
    Span();
public:
    Span(unsigned int);
    Span(const Span &);
    Span& operator=(const Span &);
    void addNumber(int n);
    int &shortestSpan() const;
    int &longestSpan() const;
    ~Span();
} ;

