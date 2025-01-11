#include "Bureaucrat.hpp"


// class a
// {
//     public:
//         a()
//         {
//             std::cout << "hello from a\n";

//         }
//         virtual ~a()
//         {
//             std::cout << "destructor of a\n";
//         }
// };
// class b:public a
// {
//     public:
//     b()
//     {
//         std::cout << "hello from b\n";
//     }
//     ~b()
//     {
//         std::cout << "destructor for b\n";
//     }
// };

// stack unwding
int main ()
{
    // try
    // {
    //     Bureaucrat imad("imad" , 156);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << "failed to construct: "<< e.what() << std::endl;
    // }

    // std::cout << "in the middle of the code\n";
    Bureaucrat imad("imad", 150);
    try
    {
        imad.downgrade();
    }
    catch (std::exception e)
    {
        std::cout << "faild: "<< e.what() << std::endl; 
    }

    std::cout << "resuming the execution of the code\n";


    // std::cout << imad;
    // try
    // {
    //    imad.downgrade();
    // }
    // catch(std::exception & e)
    // {
    //     std::cerr << e.what() << '\n';
    //     // std::cout << ;
    // }
    // std::cout << "got to the end of the program\n";
}