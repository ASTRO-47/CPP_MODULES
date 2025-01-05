#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->arr[i])
            delete this->arr[i];
    }
    
    // std::cout << "destrctor for MateriaSoure called\n";
    // free something
}

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->arr[i] = NULL;
    this->idx = 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return ;
    for(int i=0;i< 4;i++)
    {
        if (!this->arr[i])
        {
            this->arr[i] = m;
            return ;
        }
    }
    // delete m; 
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    // create new materia
    for (int i = 0; i < 4; i++)
    {
        if (this->arr[i] && this->arr[i]->getType() == type)
        {
            return this->arr[i]->clone();
        }
    }
    return NULL; // check that there
}
