#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    MyException() {
        std::cout << "MyException constructor\n";
    }
    MyException(const MyException&) {
        std::cout << "MyException copy constructor\n";
    }
    ~MyException() throw() {
        std::cout << "MyException destructor\n";
    }
    const char* what() const throw() {
        return "My custom exception";
    }
};

int main() {
    try {
        throw MyException();
    } catch (MyException e) { // Copy happens here
        std::cout << e.what() << std::endl;
    }
    return 0;
}
