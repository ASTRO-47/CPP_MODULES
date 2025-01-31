#include "Span.hpp"

Span::Span() : max(0) {}
Span::~Span() {_array.clear();}

Span::Span(unsigned int max_) : max(max_) {}

Span::Span(const Span &other): max(other.max) {
    *this = other;
}
Span& Span::operator=(const Span &other) {
    if (this != &other)
    {
        _array = other._array;
    }
    return *this;
}
void Span::addNumber(int n)
{
    if (_array.size() >= max)
        throw std::runtime_error("the max number of elements reached");
    _array.push_back(n);
    // std::cout << "a number added successfully" << std::endl;
}

int Span::shortestSpan()
{
    if (_array.size() <= 1)
        throw std::runtime_error("no enough elements for a span");
    std::vector<int> tmp = _array;
    std::sort(tmp.begin(), tmp.end());
    int shortest = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); i++)
    {
        if (shortest > tmp[i] - tmp[i - 1])
            shortest = tmp[i] - tmp[i - 1];
    }
    return shortest;
}

int Span::longestSpan()
{
    if (_array.size() <= 1)
        throw std::runtime_error("no enough elements for a span");
    return (*std::max_element(_array.begin(), _array.end()) - *std::min_element(_array.begin(), _array.end()));
}

void Span::addRange(it begin, it end)
{
    if (_array.size() + std::distance(begin , end) >= max)
        throw std::runtime_error("not enough slots to add elements");
    _array.insert(_array.end(), begin ,end);
}

void Span::print_elements() const
{
    for (size_t i = 0; i < _array.size(); i++)
    {
        std::cout << _array[i] << std::endl;
    }
}

void Span::addrandRange(unsigned int size)
{
    if (_array.size() + size >= max)
        throw std::runtime_error("not enough slots to add elements");
    for (unsigned int i = 0; i < size; i++)
    {
        _array.push_back(std::rand() % 100);
    }
}
