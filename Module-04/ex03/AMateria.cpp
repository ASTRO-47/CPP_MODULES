#include "AMateria.hpp"

AMateria::AMateria() : type("")
{   
    // std::cout << "* a materia is created\n";
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    this->type = other.type;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria " << this->getType() << " destroyed\n";
}

void AMateria::use(ICharacter &target)
{
    std::cout << "a materia " << this->type << "used on " << target.getName() << std::endl;
}

const std::string& AMateria::getType() const 
{
    return this->type;
}
