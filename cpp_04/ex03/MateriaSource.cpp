#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->arr[i])
            delete this->arr[i];
    }
    // std::cout << "destrctor for MateriaSoure called\n";

}

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->arr[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i=0; i < 4; i++)
        {
            if (other.arr[i])
                this->arr[i] = other.arr[i]->clone();
            else
                this->arr[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return ;
    for (int i=0;i< 4;i++)
    {
        if (!this->arr[i])
        {
            this->arr[i] = m->clone();
            break ;
        }
    }
    delete m; // check this later
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
