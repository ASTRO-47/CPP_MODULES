#include "Form.hpp"
// #include <iostream> 

/*   stack unwiding    */


// using namespace std;

// class a
// {
//     public:
//         a(){
//             std::cout << "a constructed\n";
//         }
//         ~a()
//         {
//             std::cout << "a destructor\n";
//         }
// };

// void f1()
// { 
//     a k;
// 	cout << "\n f1() Start \n"; 
// 	throw 100; 
// 	cout << "\n f1() End \n"; 
// } 

// void f2()
// { 
//     a l;
// 	cout << "\n f2() Start \n"; 
// 	f1(); 
// 	cout << "\n f2() End \n"; 
// } 

// void f3() 
// { 
//     a g;
// 	cout << "\n f3() Start \n"; 
// 	try { 
// 		f2(); 
// 	} 
// 	catch (int i) { 
// 		cout << "\n caught exception: " << i<< '\n'; 
// 	} 
// 	cout << "\n f3() End\n"; 
// }

// int main() 
// { 
// 	f3();
// }


int main ()
{
    try 
    {
        Form imad("imad", 1, 45);
        std::cout << imad ;
    }
    catch(std::exception &e)
    {
        std::cout << "failed: " << e.what();    
    }
}
