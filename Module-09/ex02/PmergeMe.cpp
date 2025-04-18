#include "PmergeMe.hpp"

// do not forgot canonical form

PmergeMe::PmergeMe(int ac, char *av[]) : _remain(-1)
{
    std::string _geter;
    
    for (int i = 1;i < ac; i++)
    {
        std::istringstream ss(av[i]);
    }
}

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
        _main_seq = other._main_seq;
        _pend_seq = other._pend_seq;
        _main_seq_ = other._main_seq_;
        _pend_seq_ = other._pend_seq_;
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

void    PmergeMe::binary_search_vec(size_t element)
{
    int left = 0;
    int right = _main_seq_.size();
    while (left < right)
    {   
        size_t mid = (right + left) / 2;  
        if (element > _main_seq_[mid])
            left = mid + 1;
        else
            right = mid;
    }
    _main_seq_.insert(_main_seq_.begin() + left, element);
}

void    PmergeMe::binary_search_deq(size_t element)
{
    int left = 0;
    int right = _main_seq.size();
    while (left < right)
    {   
        size_t mid = (right + left) / 2;  
        if (element > _main_seq[mid])
            left = mid + 1;
        else
            right = mid;
    }
    _main_seq.insert(_main_seq.begin() + left, element);
}

void    PmergeMe::_jacob_gen()
{
    _jacob_seq.push_back(0);
    _jacob_seq.push_back(1);
    for (size_t i = 2; i < _vec.size(); i++)
        _jacob_seq.push_back(_jacob_seq[i - 1] + 2 * _jacob_seq[i - 2]);
}

void    PmergeMe::_jacob_gen_deq()
{
    _jacob_seq_deq.push_back(0);
    _jacob_seq_deq.push_back(1);
    for (size_t i = 2; i < _vec.size(); i++)
        _jacob_seq_deq.push_back(_jacob_seq_deq[i - 1] + 2 * _jacob_seq_deq[i - 2]);
}

void    PmergeMe::_sort_vec()
{
    for (size_t i = 0; i < _pairs.size(); i++)
    {
        _main_seq_.push_back(_pairs[i].first);
        _pend_seq_.push_back(_pairs[i].second);
    }

    _main_seq_.insert(_main_seq_.begin(), _pend_seq_[0]);
    size_t insert_count = 1;
    size_t jacob_idx = 2;

    while (insert_count < _pend_seq_.size())
    {
        size_t next_idx = _jacob_seq[jacob_idx];
        for (size_t i = std::min(next_idx, _pend_seq_.size() - 1); i >= insert_count; i--) // to prevent out bounds cases
        {
            size_t element = _pend_seq_[i];
            binary_search_vec(element);
            if (!i)
                break ; //to prevent overlfow
        }
        insert_count = next_idx + 1;
        jacob_idx++;
    }
    if (_remain != -1)
        binary_search_vec(_remain);
}

void    PmergeMe::store_pairs()
{
    size_t _s = _vec.size();
    if (_s % 2)
        _remain = _vec[_s-- - 1];
    for (size_t i = 0; i < _s; i+=2)
        _pairs.push_back(std::make_pair(_vec[i], _vec[i + 1])); // check vector sort
    for (size_t i = 0; i < _pairs.size(); i++)
    {
        if (_pairs[i].first < _pairs[i].second)
        {
            int tmp = _pairs[i].first;
            _pairs[i].first = _pairs[i].second;
            _pairs[i].second = tmp;
        }
    }
    std::sort(_pairs_deq.begin(), _pairs_deq.end());
}

void    PmergeMe::_sort_deq()
{
    for (size_t i = 0; i < _pairs.size(); i++)
    {
        _main_seq.push_back(_pairs[i].first);
        _pend_seq.push_back(_pairs[i].second);
    }

    _main_seq.push_front(_pend_seq[0]); // vector 
    size_t insert_count = 1;
    size_t jacob_idx = 2;

    while (insert_count < _pend_seq.size())
    {
        size_t next_idx = _jacob_seq_deq[jacob_idx];
        for (size_t i = std::min(next_idx, _pend_seq.size() - 1); i >= insert_count; i--) // to prevent out bounds cases
        {
            size_t element = _pend_seq[i];
            binary_search_deq(element);
            if (!i)
                break ; //to prevent overlfow
        }
        insert_count = next_idx + 1;
        jacob_idx++;
    }
    if (_remain != -1)
        binary_search_deq(_remain);
}

void    PmergeMe::store_pairs_deq()
{
    size_t _s = _vec.size();
    if (_s % 2)
        _remain = _vec[_s-- - 1];
    for (size_t i = 0; i < _s; i+=2)
        _pairs_deq.push_back(std::make_pair(_vec[i], _vec[i + 1]));
    for (size_t i = 0; i < _pairs_deq.size(); i++)
    {
        if (_pairs_deq[i].first < _pairs_deq[i].second)
        {
            int tmp = _pairs_deq[i].first;
            _pairs_deq[i].first = _pairs_deq[i].second;
            _pairs_deq[i].second = tmp;
        }
    }
    std::sort(_pairs.begin(), _pairs.end());
}

bool PmergeMe::isSorted()
{
    for (size_t i = 1; i < _main_seq.size(); i++)
        if (_main_seq[i - 1] > _main_seq[i])
            return false;
    return true;
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
                throw std::runtime_error("INVALID FORMAT");
            int  _res = std::strtod(_geter.c_str(), &check);
            if (_res < 0 || check[0] != '\0')
                throw std::runtime_error("INVALID FORMAT");
            _vec.push_back(_res);
        }
    }
    if (_vec.size() < 2)
        throw std::runtime_error("NOT ENOUGH ELEMENTS");
    _jacob_gen(); // generate the jacobsthal seq
    _jacob_gen_deq(); // generate the jacobsthal seq
    std::cout << "Before:   ";
    for (size_t i = 0;i < _vec.size() ;i++)
    {
        std::cout << _vec[i];
        if (i != _vec.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;

    // for vector
    std::clock_t _start_vec = std::clock();
    store_pairs();
    _sort_vec();
    std::clock_t _end_vec = std::clock();

    // for deque
    std::clock_t _start_deq = std::clock();
    store_pairs_deq();
    _sort_deq();
    std::clock_t _end_deq = std::clock();

    std::cout << "After:   ";
    for (size_t i = 0;i < _main_seq_.size() ;i++)
    {
        std::cout << _main_seq_[i];
        if (i != _main_seq_.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "          ------result------              " << std::endl;

    double _vec_time = (double(_end_vec - _start_vec) * 1e6) / CLOCKS_PER_SEC; // sort
    std::cout << "time to sort with std::vector : " << _vec_time << " us" << std::endl;
    double _deq_time = (double(_end_deq - _start_deq) * 1e6) / CLOCKS_PER_SEC;
    std::cout  << "time to sort with std::deque : " << _deq_time << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}