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
/*Static Binding: The compiler binds the function call at compile-time 
based on the type of the pointer, not the object. This is the default for non-virtual functions.
Dynamic Binding and 
Polymorphism: If a base class function is declared as 
virtual, the compiler generates a vtable for virtual functions. At runtime, 
the vtable of the object being pointed to is used to call the correct 
function (derived class's function, if overridden).

Key Concept: Polymorphism ensures that when using a base class pointer 
to call a virtual function, the derived class's function is called 
(if it overrides the base class's virtual function).*/


int main()
{
    /* to check the shallow copy
    Dog d1;
    Dog d2(d1);
    std::cout << d1._br <<std::endl;
    std::cout << d2._br <<std::endl; */

    int N = 4;
    Animal *ans[N];

    // creating dogs objects
    for (int i=0;i<N/2;i++)
        ans[i] = new Dog();

    // creating cats objects
    for (int i=N/2;i<N;i++)
        ans[i] = new Cat();

    // deleting the objects
    for (int i=0;i<N;i++)
        delete ans[i];
    return 0;
}
