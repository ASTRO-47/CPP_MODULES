#include "sed.hpp"

Sed::Sed(char **av)
{
    this->f_name = av[1];
    this->s1 = av[2];
    this->s2 = av[3];
}

Sed::~Sed()
{
    // std::cout << "object destroyed" << std::endl;
}

int    Sed::read_replace(Sed &obj, std::ifstream &file)
{
    int pos;
    std::string rest;
    std::string begin;
    std::string replace;
    std::ofstream out_file(obj.f_name + ".replace");
    if (!out_file.is_open())
    {
        std::cerr << "can not open file" << std::endl;
        return (1);
    }
    std::string buffer;
    if (!std::getline(file, buffer, '\0'))
    {
        std::cerr << "can not read from file" << std::endl;
        return (out_file.close(), 1);
    }
    if (buffer.empty())
    {
        std::cerr << "empty file" << std::endl;
        out_file.close();
        return 1;
    }
    pos = buffer.find(s1);
    replace = buffer;
    while (pos != -1)
    {
        begin = replace.substr(0, pos);
        rest = replace.substr(pos + s1.length(), buffer.length());
        replace = begin;
        replace += s2;
        replace += rest;
        pos = replace.find(s1, pos + s1.length());
    }
    out_file << replace;
    out_file.close();
    return 0;
}