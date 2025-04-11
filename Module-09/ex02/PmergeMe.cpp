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

PmergeMe::~PmergeMe()
{

}