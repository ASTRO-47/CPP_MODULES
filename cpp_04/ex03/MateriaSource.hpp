#ifndef MATERISOURCE_HPP
#define MATERISOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *arr[4];
    int idx;
public:
    virtual ~MateriaSource();
    MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    virtual void see(void)
    {
        for (int i=0;i<4;i++)
        {
            if (this->arr[i])
               std::cout << this->arr[i]->getType() << std::endl;
        }
    };
};

#endif