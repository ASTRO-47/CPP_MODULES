#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->gr[i])
            delete this->gr[i];
        if (this->arr[i])
            delete this->arr[i];
    }
    // std::cout << "destrctor for MateriaSoure called\n";

}

MateriaSource::MateriaSource()
{
    i = 0;
    for (int i = 0; i < 4; i++) {
        this->arr[i] = NULL;
        this->gr[i] = NULL;
    }
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
            this->gr[this->i++] = m;
            this->arr[i] = m->clone();
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    // create new materia
    for (int i = 0; i < 4; i++)
    {
        if (this->arr[i] && this->arr[i]->getType() == type)
        {
            AMateria * tmp = this->arr[i]->clone();
            return tmp;
        }
    }
    return NULL; // check that there
}






// 2000-13-20    |  5454.8  
// isstringstreamm  ss(line)
// string date, string pipe,   float value;
//  ss >> date >> pipe >> value ;
// // if (date != 10)
// while (i < 10) {
//     if (i == 4 || i == 7)
//      {
//         if (date.at(i) != '-')
//             return ;
//         else if (!isdigit())
//      }
// }
// isstringstreamm  ss(date)
//    int year, month, day;char ch1, ch2;
// ss >> year >> ch1 >> month >>
// 23123123123,75757
// 0000-13-20,5454.8  
