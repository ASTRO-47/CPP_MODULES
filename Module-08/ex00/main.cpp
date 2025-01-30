#include "easyfind.hpp"

/*

The components of STL are the features provided by Standard Template Library (STL) in C++ that can be classified into 4 types:
Containers
Algorithms
Iterators
Functors

Containers can be further classified into 4 types:
Sequence Containers
Container Adaptors
Associative Containers
Unordered Associated Containers

----------vector---------
reseved the memory continguisly, indexable access like a normal c-style array
when a vector have no more memory blocks to add elements its look for a bigger region and move all the previous elements
then add the new elements

*/

int main()
{
    std::vector<int> imad;

    imad.push_back(1);
    imad.push_back(2);
    imad.push_back(3);
    imad.push_back(4);

    try
    {
        int  looking_for = easyfind(imad, 5);
        std::cout << looking_for << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        int  looking_for = easyfind(imad, 4);
        std::cout << "value found: " << looking_for << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
