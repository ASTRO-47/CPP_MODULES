#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "destrctor for MateriaSoure called\n";
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
    if (!(this->arr[this->idx]))
        this->arr[this->idx] = m->clone();
    this->idx++;
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    // create new materia
    if (type == "elo")
        return NULL;
    return NULL;
}


