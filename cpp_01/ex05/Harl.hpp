#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    static int hello;
    Harl();
    ~Harl();
    void complain( std::string level );
};
typedef void (Harl::*t_func)();
#endif