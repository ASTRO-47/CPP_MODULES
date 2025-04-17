#pragma once

#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <ctime>
#include <iomanip>

class PmergeMe
{
private:
    PmergeMe();
    void                                store_pairs(); 
    void                                store_pairs_deq(); 
    int                                 _remain;
    std::vector<int>                    _vec;
    std::deque<int>                     _deq;
    std::vector<std::pair<int, int> >   _pairs;
    std::deque<std::pair<int, int> >   _pairs_deq;
    std::vector<int>                    _jacob_seq;
    std::deque<size_t>                  _main_seq;
    std::deque<size_t>                  _pend_seq;
    std::vector<size_t>                 _main_seq_;
    std::vector<size_t>                 _pend_seq_;
    void                                _jacob_gen();
    void                                binary_search(size_t);
    bool                                isSorted();
    void                                _sort_vec();
    void                                _sort_deq();
public:
    PmergeMe(int, char *[]);
    PmergeMe(const PmergeMe &);
    PmergeMe &operator=(const PmergeMe &);
    void        parse_sort(int, char *[]);

    ~PmergeMe();
} ;
