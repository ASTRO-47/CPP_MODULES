
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>


class Sed{
public:
    std::string f_name;
    std::string s1;
    std::string s2;
    Sed(char *av[]);
    ~Sed();
    int read_replace(Sed &obj, std::ifstream &file);
};

#endif