#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


// an abstract class can never be instiated , its just can be derived from
// the derived class should overruide the virtual pure methods in order to work
// pure virtual functions needs to be overriden in the derived class
// a class become abstract class  if there is at least one pure virtual function
// need to override the pure virtual function to avoid the derived being an abstract class
// not that you derive an abstract class from a no-abstract class a


//  Abstract classes support single inheritance, meaning a class can inherit from only one abstract class.

int main( void )
{
    const Animall* j = new Dog();
    const Animall* i = new Cat();

    // j->makeSound();
    // i->makeSound();


    delete j;//should not create a leak
    delete i;
    
    const Animall* animals[2] = { new Dog(), new Cat()};
    for ( int i = 0; i < 2; i++ )
        delete animals[i];

    return 0;
}
