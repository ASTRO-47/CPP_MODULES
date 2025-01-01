#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    std::cout << "destrctor for MateriaSoure called\n";
    // free something
}

void MateriaSource::learnMateria(AMateria *m)
{

}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    // create new materia
    return NULL;

}
