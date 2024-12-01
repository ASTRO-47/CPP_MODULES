#include "Fixed.hpp"

int main()
{
    test h;
    // h.buffer = new char[6];
    // h.buffer[0] = 'h';
    // h.buffer[1] = 'e';
    // h.buffer[2] = '\0';
    std:: cout <<  h.a << std::endl;
    std:: cout <<  h.b << std::endl;
    // std::cout << h.b << "\n" << h.a <<"\n" <<  h.buffer <<std::endl;
    // delete[] h.buffer;
    test me = h;
    std:: cout <<  me.a << std::endl;
    std:: cout <<  me.b << std::endl;
    // std::cout << me.b << "\n" << me.a << "\n" << me.buffer <<std::endl;
    // delete[] me.buffer;
}
