#pragma once

#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <utility>

class PmergeMe
{
private:
    PmergeMe();
    void                                store_pairs(); 
    int                                 _remain;
    std::vector<int>                    _vec;
    std::deque<int>                     _deq;
    std::vector<std::pair<int, int> >    _pairs;
public:
    PmergeMe(int, char *[]);
    PmergeMe(const PmergeMe &);
    PmergeMe &operator=(const PmergeMe &);
    void        parse_sort(int, char *[]);

    ~PmergeMe();
} ;