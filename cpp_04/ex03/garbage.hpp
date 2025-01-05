#ifndef GARBAGE_HPP
#define GARBAGE_HPP

#include "AMateria.hpp"

class Gar 
{
public:
    struct node
    {
        AMateria *ptr;
        struct node *next;
    } ;

    void add(AMateria* ptr);
    void clear();

    // Gar(const Gar & other);
    // Gar& operator=(const Gar & other);
    Gar();
    ~Gar();

private:
    node *head;
    // do not forgot the canonical form
} ;


#endif
