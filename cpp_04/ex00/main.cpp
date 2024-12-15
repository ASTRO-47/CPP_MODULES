#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*"is-a" relationship between the base and the derived class that's why 
a base class pointer can hold a derived class object

we can not do the reverse way because of the type safety and logical 
constraints in object-oriented programming*/

/*ref about polymorphisme:
https://youtu.be/4NPOIaUxnnk 


virtual = dynamic binding  = overriding
static binding = redefining

https://www.ibm.com/docs/en/i/7.5?topic=only-virtual-functions-c
*/

void    f(){system("leaks animal");} // remove this later du

int main()
{
    // atexit (f);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "j type : " << j->getType() << " " << std::endl;
    std::cout << "i type: " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    std::cout << "\n------------wrong classes--------------\n\n";

    const WrongAnimal *_meta = new WrongAnimal();
    const WrongAnimal *_i = new WrongCat();

    std::cout<< "WrongAnimal type : " << _meta->getType() << " " << std::endl;
    std::cout<< "WrongCat  type: "  << _i->getType() << " " << std::endl;

    _meta->makeSound();
    _i->makeSound();

    delete _meta;
    delete _i;
    return 0;
}
