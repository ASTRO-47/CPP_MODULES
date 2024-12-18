// inherite from a materia 
// const type 

#ifndef CURE_HPP
#define CURE_HP


#include  "AMateria.hpp"

class Cure: public AMateria{
private:
    //
public:
    Cure();
    ~Cure();
    Cure(Cure const &other);
    Cure& operator=(Cure const &other);
    //
};

#endif