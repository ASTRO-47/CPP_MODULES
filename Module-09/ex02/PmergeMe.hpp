#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <utility>
#include <ctime>
#include <sstream>
#include <cstdlib>

class PmergeMe
{
private:
    int _remain;
    std::vector<int> _vec;
    std::deque<int> _deq;
    std::vector<std::pair<int, int> > _pairs;
    std::deque<std::pair<int, int> > _pairs_deq;
    std::vector<size_t> _jacob_seq;
    std::deque<size_t> _jacob_seq_deq;
    std::deque<size_t> _main_seq;
    std::deque<size_t> _pend_seq;
    std::vector<size_t> _main_seq_;
    std::vector<size_t> _pend_seq_;

    // Template functions
    template<typename Container>
    void binary_search(Container& main_seq, size_t element);
    
    template<typename Container>
    void jacob_gen(Container& jacob_seq, size_t size);
    
    template<typename ContainerMain, typename ContainerPend, typename ContainerJacob, typename PairContainer>
    void sort_container(ContainerMain& main_seq, ContainerPend& pend_seq, 
                     ContainerJacob& jacob_seq, const PairContainer& pairs, int remain, bool is_vector);
    
    template<typename PairContainer>
    void store_pairs(PairContainer& pairs, const std::vector<int>& vec, int& remain);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

    bool isSorted();
    void parse_sort(int ac, char *av[]);
};

// Template implementations

template<typename Container>
void PmergeMe::binary_search(Container& main_seq, size_t element)
{
    int left = 0;
    int right = main_seq.size();
    while (left < right)
    {   
        size_t mid = (right + left) / 2;  
        if (element > main_seq[mid])
            left = mid + 1;
        else
            right = mid;
    }
    main_seq.insert(main_seq.begin() + left, element);
}

template<typename Container>
void PmergeMe::jacob_gen(Container& jacob_seq, size_t size)
{
    jacob_seq.push_back(0);
    jacob_seq.push_back(1);
    for (size_t i = 2; i < size; i++)
        jacob_seq.push_back(jacob_seq[i - 1] + 2 * jacob_seq[i - 2]);
}

template<typename ContainerMain, typename ContainerPend, typename ContainerJacob, typename PairContainer>
void PmergeMe::sort_container(ContainerMain& main_seq, ContainerPend& pend_seq, 
                        ContainerJacob& jacob_seq, const PairContainer& pairs, int remain, bool is_vector)
{
    for (size_t i = 0; i < pairs.size(); i++)
    {
        main_seq.push_back(pairs[i].first);
        pend_seq.push_back(pairs[i].second);
    }

    if (is_vector)
        main_seq.insert(main_seq.begin(), pend_seq[0]);
    else
        main_seq.insert(main_seq.begin(), pend_seq[0]);
        
    size_t insert_count = 1;
    size_t jacob_idx = 2;

    while (insert_count < pend_seq.size())
    {
        size_t next_idx = jacob_seq[jacob_idx];
        size_t limit = next_idx < pend_seq.size() ? next_idx : pend_seq.size() - 1;
        
        for (size_t i = limit; i >= insert_count; i--)
        {
            size_t element = pend_seq[i];
            binary_search(main_seq, element);
            if (i == 0)
                break; // to prevent overflow
        }
        insert_count = next_idx + 1;
        jacob_idx++;
    }
    if (remain != -1)
        binary_search(main_seq, remain);
}

template<typename PairContainer>
void PmergeMe::store_pairs(PairContainer& pairs, const std::vector<int>& vec, int& remain)
{
    size_t _s = vec.size();
    if (_s % 2)
        remain = vec[_s-- - 1];
    for (size_t i = 0; i < _s; i+=2)
        pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
    for (size_t i = 0; i < pairs.size(); i++)
    {
        if (pairs[i].first < pairs[i].second)
        {
            int tmp = pairs[i].first;
            pairs[i].first = pairs[i].second;
            pairs[i].second = tmp;
        }
    }
    std::sort(pairs.begin(), pairs.end());
}

#endif