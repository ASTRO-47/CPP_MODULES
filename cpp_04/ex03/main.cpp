#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


// class base
// {
// public:
//     virtual ~base();
//     base(){
//         puts("base constructor");
//     }
//     virtual void see() = 0;
    
//     // virtual void getthing() const  = 0;
// };
// base::~base()
// {
//     puts("base destructor");
// }

// class derived : public base
// {
// public:
//     ~derived()
//     {
//         puts("der destructor");
//     };
//     derived()
//     {
//         std::cout << "base class constructor\n";
//     }
//     void see()
//     {
//         puts("hello");
//     }
//     void getthing()
//     {
//         puts("hahaha");
//     }
// };

void f()
{   
    system ("leaks materia");
}

int main()
{
    atexit(f);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->unequip(0);
    me->use(1, *bob);

    delete me;
    delete bob;
    delete src;
    return 0;
}