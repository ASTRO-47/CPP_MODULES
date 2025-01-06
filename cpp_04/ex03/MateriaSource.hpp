#ifndef MATERISOURCE_HPP
#define MATERISOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *arr[4];
    AMateria *gr[4];
    int i;

public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource& operator=(const MateriaSource &other);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);

    ~MateriaSource();
};

#endif