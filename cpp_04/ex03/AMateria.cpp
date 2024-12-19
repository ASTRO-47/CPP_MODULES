#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::~AMateria()
{
    // desctructor
}

void AMateria::use(ICharacter &target)
{  
    std::cout << "a materia " << this->type << "used on " << target.getName() << std::endl;
}

const std::string& AMateria::getType() const 
{
    return this->type; 
}