#include <iostream>

class Imad{
public:
    static int i;
    void print_me() const
    {
        std::cout << "hello world";
    }
};

int  Imad::i =0;
int main()
{
    std::string hello;
    std::cout << "hello]";
    std::cout << "its imad " << hello << std::endl;
    std::cout<<hello;
    // Imad::print_me();  
    // Imad test;
    // Imad test1;
    // test.print_me();
    // test.i = 9;
    // test1.i = 4;
    // // std::cout << "start\n";
    // std::cout << (test.i) << std::endl;
    // std::cout << (test1.i);
}