#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"



class base
{
public:
    virtual ~base();
    virtual void see() = 0;
    // virtual void getthing() const  = 0;
};
// base::~base(){}

class derived : public base
{
public:
    derived()
    {
        std::cout << "constructor";
    }
    void see()
    {
        puts("hello");
    }
    void getthing()
    {
        puts("hahaha");
    }
};

int main()
{
    base *b = new derived();
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // std::cout << me->getName() << std::endl;
    // delete me;
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    // return 0;
}