#include "Serializer.hpp"

// int main ()
// {
//     int test = 8;
//     void * ptr = &test;
//     uintptr_t u = reinterpret_cast<uintptr_t> (ptr);
//     std::cout << u << std::endl;
//     std::cout << static_cast<int>(u) << std::endl;
//     // uintptr_t h = &u;
//     // std::cout << "size of uintptr_t:" << sizeof(uintptr_t) << std::endl; 
//     // std::cout << "size of unsigned long:" << sizeof(long) << std::endl;
    
// }

int main() 
{
    int x = 42;
    int* ptr = &x;

    void *test = malloc(2);
    uintptr_t myPoiner = reinterpret_cast<uintptr_t>(test);
    // Convert pointer to uintptr_t
    uintptr_t ptr_as_integer = reinterpret_cast<uintptr_t>(ptr);
    std::cout << "Pointer as integer: " << ptr_as_integer << std::endl;
    printf("pointer as integer with int sign == %d\n", static_cast<int>(ptr_as_integer));

    // Convert uintptr_t back to pointer
    int* restored_ptr = reinterpret_cast<int*>(ptr_as_integer);
    std::cout << *(reinterpret_cast<int*> (ptr_as_integer)) << std::endl;
    std::cout << "Restored value: " << *restored_ptr << std::endl;

    return 0;
}
