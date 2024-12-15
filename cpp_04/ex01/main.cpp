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

int main()
{
    int N = 4;
    Animal *ans[N];

    // creating dogs objects
    for (int i=0;i<N/2;i++)
        ans[i] = new Dog();

    
    // creating cats objects
    for (int i=N/2;i<N;i++)
        ans[i] = new Cat();

    for (int i=0;i<N;i++)
        delete ans[i];
    return 0;
}