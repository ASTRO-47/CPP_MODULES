#pragma once

#include <iostream>
#include <sstream>
#include <deque>
#include <vector>

class PmergeMe
{
private:
    PmergeMe();
    std::vector<int> _vec;
    std::deque<int> _deq;
public:
    PmergeMe(int, char *[]);
    PmergeMe(const PmergeMe &);
    PmergeMe &operator=(const PmergeMe &);
    void        parse_sort(int, char *[]);
    void        Error_msge() const;

    
    ~PmergeMe();
} ;