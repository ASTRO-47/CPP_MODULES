#include "easyfind.hpp"

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
