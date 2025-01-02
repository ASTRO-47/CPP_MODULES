#ifndef MATERISOURCE_HPP
#define MATERISOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource
{
private:
    AMateria *arr[4];
    int idx;
public:
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif