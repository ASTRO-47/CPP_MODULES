#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*ref about polymorphisme:
https://youtu.be/4NPOIaUxnnk 


virtual = dynamic binding  = overriding
static binding = redefining

https://www.ibm.com/docs/en/i/7.5?topic=only-virtual-functions-c
*/


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "j type : " << j->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    std::cout << "\n------------Wrong classes--------------\n\n";

    const WrongAnimal *_meta = new WrongAnimal();
    const WrongAnimal *_i = new WrongCat();

    std::cout<< "WrongAnimal type: " << _meta->getType() << std::endl;
    std::cout<< "WrongCat  type: "  << _i->getType()<< std::endl;

    _meta->makeSound();
    _i->makeSound();

    delete _meta;
    delete _i;
    return 0;
}
