#include "Harl.hpp"

int    read_replace(const std::string &f_name, const std::string &s1, const std::string &s2,  std::ifstream &file)
{
    int pos;
    std::string rest;
    std::string helper;
    std::string begin;
    std::string replace;
    std::ofstream out_file(f_name + ".replace");
    if (!out_file.is_open())
    {
        std::cout << "can not open file" << std::endl;
        return (1);
    }
    std::string str;
    while(std::getline(file, str))
    {
        pos = str.find(s1);
        replace = str;
        while (pos != -1)
        {
            begin = replace.substr(0, pos);
            // std::cout << "begin == "<<begin << "]"<< std::endl;
            rest = replace.substr(pos + s1.length(), str.length() - 1);
            // std::cout << "rest == "<<rest << "]"<< std::endl;
            replace = begin;
            replace += s2;
            replace += rest;
            pos = replace.find(s1, pos + s1.length());
            // std::cout << "str  == "<<str<< "]"<< std::endl;
            // std::cout << pos<<"]\n";
        }
        out_file << replace << std::endl;
    }
    out_file.close();
    return 0;
}