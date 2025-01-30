#include <iostream>
/*

The components of STL are the features provided by Standard Template Library (STL) in C++ that can be classified into 4 types:
Containers
Algorithms
Iterators
Functors

Containers can be further classified into 4 types:
Sequence Containers
Container Adaptors
Associative Containers
Unordered Associated Containers


the map using binary search, called red-black tree
*/


#include <map>

using namespace std;
struct for_test
{
    string name;
    int age ;
} ;

class person

{
    public:
        string name;
        int age;
        person(string m, int a) : name(m), age(a) {}
        void declare (){
            cout << "name  :" << name << ",    age:  " << age << endl;
        }
};


int main()
{
    person first("imad", 21);

    first.declare();
}

