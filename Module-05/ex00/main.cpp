#include <iostream>

int main ()
{
    std::string name = "word";
    
    try
    {
        // std::cout << name.at(4) << std::endl;
        int *arr = new int[99999999999999];
    }
    catch (...)
    {
        std::cout << "out of range exption thronw\n";
    }
    // catch (std::bad_alloc &r)
    // {
    //     std::cout << "bad alloc execption thrown\n";
    // }

}
