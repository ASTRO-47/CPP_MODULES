#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac == 1)
        return (std::cerr << "invalid number of argumetns\n", 1);
    try
    {
        PmergeMe _sort(ac, av);
        _sort.parse_sort(ac, av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
