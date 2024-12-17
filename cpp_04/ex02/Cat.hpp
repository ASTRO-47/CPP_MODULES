#ifndef CAT_HPP
#define CAT_HPP

#include "Animal2.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animall{
private:
    // 
    Brain *_br;
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(const Cat &other);
    ~Cat();

    void makeSound(void) const;
};

#endif