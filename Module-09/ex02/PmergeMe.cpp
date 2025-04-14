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

void    PmergeMe::_jacob_gen()
{
    _jacob_seq.push_back(0);
    _jacob_seq.push_back(1);
    for (size_t i = 2; i < _vec.size(); i++)
    {
        _jacob_seq.push_back(_jacob_seq[i-1] + 2*_jacob_seq[i-2]);
    }
    for (size_t i = 0; i < _pairs.size(); i++)
    {
        _main_seq.push_back(_pairs[i].first);
        _pend_seq.push_back(_pairs[i].second);
    }

    _main_seq.push_front(_pend_seq[0]);
    size_t insert_count = 1; // we already inserted _pend_seq[0]
    size_t jacob_idx = 1;
    
    while (insert_count < _pend_seq.size()) // 0 1 1 3 
    {
        // Get the next Jacobsthal index within the range of pending sequence
        size_t next_idx = _jacob_seq[jacob_idx];
        while (next_idx < insert_count && next_idx < _pend_seq.size())
        {
            jacob_idx++;
            next_idx = _jacob_seq[jacob_idx];
        }

        // Process elements from current Jacobsthal number down to the previous inserted element
        for (size_t i = std::min(next_idx, _pend_seq.size() - 1); i >= insert_count; i--)
        {
            if (i == 0) continue; // Skip the first element which is already inserted
            
            // Binary search to find insertion position in main sequence
            size_t left = 0;
            size_t right = insert_count + i; // The current sorted portion of main_seq
            size_t element = _pend_seq[i];
            
            while (left < right)
            {
                size_t mid = left + (right - left) / 2;
                if (_main_seq[mid] < element)
                    left = mid + 1;
                else
                    right = mid;
            }

            // Insert at the found position
            _main_seq.insert(_main_seq.begin() + left, element);
            
            if (i == 0) break; // To handle unsigned integer underflow
        }
        
        insert_count = next_idx + 1;
        jacob_idx++;
        
        if (insert_count >= _pend_seq.size())
            break;
    }
    
    // Handle any remaining elements
    for (size_t i = insert_count; i < _pend_seq.size(); i++)
    {
        if (i == 0) continue; // Skip the first element which is already inserted
        
        // Binary search to find insertion position
        size_t left = 0;
        size_t right = _main_seq.size();
        size_t element = _pend_seq[i];
        
        while (left < right)
        {
            size_t mid = left + (right - left) / 2;
            if (_main_seq[mid] < element)
                left = mid + 1;
            else
                right = mid;
        }
        
        // Insert at the found position
        _main_seq.insert(_main_seq.begin() + left, element);
    }
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
    std::sort(_pairs.begin(), _pairs.end());
    _jacob_gen();
    // for (size_t i = 0; i < _main_seq.size(); i++)
    // {
        // std::cout << _pairs[i].first << std::endl << _pairs[i].second << std::endl << std::endl; 
        // std::cout << _main_seq[i] << std::endl;
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
                throw std::runtime_error("INVALID FORMAT");
            int  _res = std::strtod(_geter.c_str(), &check);
            if (_res < 0 || check[0] != '\0')
                throw std::runtime_error("INVALID FORMAT");
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
    store_pairs();
    std::cout << "After:   ";
    for (size_t i = 0;i < _main_seq.size() ;i++)
    {
        std::cout << _main_seq[i];
        if (i != _main_seq.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;

}


PmergeMe::~PmergeMe()
{ 

}