#include "Span.hpp"

Span::Span() : max(0) {}
Span::~Span() {}

Span::Span(unsigned int max_) : max(max_) {}

Span::Span(const Span &other): max(other.max) {
    *this = other;
}
Span& Span::operator=(const Span &other) {
    if (this != &other)
    {
        array = other.array;
    }
    return *this;
}
void Span::addNumber(int n)
{
    if (array.size() >= max)
        throw std::runtime_error("the max number of elements reached");
    array.push_back(n);
    std::cout << "a number added successfully" << std::endl;
}
int &Span::shortestSpan() const
{
    for (std::vector<int>::iterator i = array.begin();i  != this->array.end();i++)
    {
        //
    }
}

int &Span::longestSpan() const
{
    for (std::vector<int>::iterator i = array.begin();i  != this->array.end();i++)
    {
        //
    }
}