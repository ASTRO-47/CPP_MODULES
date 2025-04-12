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

void        PmergeMe::Error_msge() const
{
    std::cerr << "ERROR" << std::endl;
    exit (1);
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
                Error_msge();
            int  _res = std::strtod(_geter.c_str(), &check);
            if (_res < 0 || check[0] != '\0')
                Error_msge();
            _vec.push_back(_res);
        }
    }
    std::cout << "Before:   ";
    for (size_t i = 0;i < _vec.size() ;i++)
    {
        std::cout << _vec[i];
        if (i != _vec.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl ;
    // std::cout << "After:   "; print all the container elements after sort
}


PmergeMe::~PmergeMe()
{

}