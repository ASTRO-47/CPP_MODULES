#include "PmergeMe.hpp"

// Canonical form implementation

PmergeMe::PmergeMe() : _remain(-1)
{
    // do nothing i guess for now
}

PmergeMe::PmergeMe(const PmergeMe & other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _remain = other._remain;
        _vec = other._vec;
        _deq = other._deq;
        _pairs = other._pairs;
        _pairs_deq = other._pairs_deq;
        _jacob_seq = other._jacob_seq;
        _jacob_seq_deq = other._jacob_seq_deq;
        _main_seq = other._main_seq;
        _pend_seq = other._pend_seq;
        _main_seq_ = other._main_seq_;
        _pend_seq_ = other._pend_seq_;
    }
    return *this;
}

bool checker(std::string _m)
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

bool PmergeMe::isSorted()
{
    for (size_t i = 1; i < _main_seq.size(); i++)
        if (_main_seq[i - 1] > _main_seq[i])
            return false;
    return true;
}

void PmergeMe::parse_sort(int ac, char *av[])
{
    char *check = NULL;
    for (int i = 1; i < ac; i++)
    {
        std::istringstream ss(av[i]);
        std::string _geter; // positive integer sequence
        while (ss >> _geter)
        {
            if (!checker(_geter))
                throw std::runtime_error("INVALID FORMAT");
            int _res = std::strtod(_geter.c_str(), &check);
            if (_res < 0 || check[0] != '\0')
                throw std::runtime_error("INVALID FORMAT");
            _vec.push_back(_res);
        }
    }
    if (_vec.size() < 2)
        throw std::runtime_error("NOT ENOUGH ELEMENTS");
    
    // Generate the Jacobsthal sequences
    jacob_gen(_jacob_seq, _vec.size());
    jacob_gen(_jacob_seq_deq, _vec.size());
    
    std::cout << "Before:   ";
    for (size_t i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i];
        if (i != _vec.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;

    // for vector
    std::clock_t _start_vec = std::clock();
    store_pairs(_pairs, _vec, _remain);
    sort_container(_main_seq_, _pend_seq_, _jacob_seq, _pairs, _remain, true);
    std::clock_t _end_vec = std::clock();

    // for deque
    std::clock_t _start_deq = std::clock();
    store_pairs(_pairs_deq, _vec, _remain);
    sort_container(_main_seq, _pend_seq, _jacob_seq_deq, _pairs_deq, _remain, false);
    std::clock_t _end_deq = std::clock();

    std::cout << "After:   ";
    for (size_t i = 0; i < _main_seq.size(); i++)
    {
        std::cout << _main_seq[i];
        if (i != _main_seq.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "          ------result------              " << std::endl;

    double _vec_time = (double(_end_vec - _start_vec) * 1e6) / CLOCKS_PER_SEC; // sort
    std::cout << "time to sort with std::vector : " << _vec_time << " us" << std::endl;
    double _deq_time = (double(_end_deq - _start_deq) * 1e6) / CLOCKS_PER_SEC;
    std::cout << "time to sort with std::deque : " << _deq_time << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}