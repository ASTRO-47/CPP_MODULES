#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

typedef std::vector<int>::iterator it;

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
    void addRange(it, it);
    void addrandRange(unsigned int);
    void print_elements() const;
    
    
    ~Span();
} ;
