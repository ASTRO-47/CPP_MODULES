#pragma once

#include <iostream>
#include <sstream>

class PmergeMe
{
private:
    PmergeMe();

public:
    PmergeMe(int, char *[]);
    PmergeMe(const PmergeMe &);
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe();
} ;