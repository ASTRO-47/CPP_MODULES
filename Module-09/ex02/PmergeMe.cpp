#include "PmergeMe.hpp"

// do not forgot canonical form

PmergeMe::PmergeMe(int ac, char *av[])
{
    std::string _geter;
    
    for (int i = 1;i < ac; i++)
    {
        std::istringstream ss(av[i]);
    }
}

PmergeMe::PmergeMe()
{
    // do nothing i guess for now
}

PmergeMe::PmergeMe(const PmergeMe & other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe & other)
{
    if (this != &other)
    {
        // copy the attres
    }
    return *this;
}

bool    checker(std::string _m)
{
    size_t i = 0;
    if (_m[0] == '+')
        i++;
    for (; i < _m.length(); i++)
    {
        if (!std::isdigit(_m[i]))
            return false;
    }
    return true;
}

void    PmergeMe::store_pairs()
{
    size_t _s = _vec.size();
    if (_s % 2)
        _remain = _vec[_s-- - 1];
    for (size_t i = 0; i < _s; i+=2)
    {
        _pairs.push_back(std::make_pair(_vec[i], _vec[i + 1]));
    }
    for (size_t i = 0; i < _pairs.size(); i++)
    {
        if (_pairs[i].first < _pairs[i].second)
        {
            int tmp = _pairs[i].first;
            _pairs[i].first = _pairs[i].second;
            _pairs[i].second = tmp;
        }
    }
    // for (size_t i = 0; i < _pairs.size(); i++)
    // {
        // std::cout << _pairs[i].first << std::endl << _pairs[i].second << std::endl << std::endl; 
    // }
}

void    PmergeMe::parse_sort(int ac, char *av[])
{
    char *check = NULL;
    for (int i = 1;i < ac; i++)
    {
        std::istringstream ss(av[i]);

        std::string _geter; // positive integer sequence
        while (ss >> _geter)
        {
            if (!checker(_geter))
                throw ("INVALID FORMAT");
            int  _res = std::strtod(_geter.c_str(), &check);
            if (_res < 0 || check[0] != '\0')
                throw ("INVALID FORMAT");
            _vec.push_back(_res);
        }
    }
    std::cout << "Before:   ";
    // for (size_t i = 0;i < _vec.size() ;i++)
    // {
    //     std::cout << _vec[i];
    //     if (i != _vec.size() - 1)
    //         std::cout << " ";
    // }
    // std::cout << std::endl ;
    store_pairs();
    // std::cout << "After:   "; print all the container elements after sort
}


PmergeMe::~PmergeMe()
{ 

}