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
        this->arr[this->idx] = m;
    this->idx++;
}
void AMateria::use(ICharacter &target)
{  
    std::cout << "a materia " << this->type << "used on " << target.getName() << std::endl;
}

const std::string& AMateria::getType() const 
{
    return this->type; 
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    
    // create new materia
    return NULL;
}


