#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor for Brain called\n";
}


Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "copy constructor for Brain called\n";
}

Brain &Brain::operator=(const Brain &other)
{  
    if (this != &other)
    {
        for (int i=0;i<100;i++)
            this->ideas[i] = other.ideas[i];
    } 
    std::cout << "copy assigement for Brain called\n";
    return *this;
}

Brain::~Brain()
{
    std::cout << "destructor for Brain called\n";
}

