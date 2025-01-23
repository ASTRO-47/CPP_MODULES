#include "Array.hpp"

#include <iostream> 

using namespace std; 

template <class T> class Test 
{
private: 
    T val; 
public: 
    static int count; 

Test() 
{
	count++; 
}

// some other stuff in class 
}; 

template<class T> 
int Test<T>::count = 0; 



class test
{
public:
    static int o;
} ;

int main() 
{
    Test<int> a; // value of count for Test<int> is 1 now 
    Test<int> b; // value of count for Test<int> is 2 now 
    Test<double> c; // value of count for Test<double> is 1 now 
    // cout << Test<int>::count << endl;
    cout << Test<int>::count << endl; // prints 2 
    cout << Test<double>::count << endl; //prints 1 

    return 0; 
}

// int main()
// {
//     test<char> (4);
//     test<int> (4);
//     test<char>(5);
//     test<int> (34);
// }

