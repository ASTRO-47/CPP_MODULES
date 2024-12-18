#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::~AMateria()
{
    // desctructor
}

// void AMateria::use(ICharacter &tagrget)
// {  
//     std::cout << this->type << ": * shoots an ice bolt at " << target.get_name() << std::endl;
// }
