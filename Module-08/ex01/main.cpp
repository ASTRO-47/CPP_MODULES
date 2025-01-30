#include "Span.hpp"

using namespace std;
int main()
{
    Span test(-1);
    try
    {
        test.addNumber(3);
        test.addNumber(3);
        test.addNumber(3);
        test.addNumber(3);
        test.addNumber(3);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

}