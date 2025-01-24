
#include "Iter.hpp"

class Awesome
{
	public:
    	Awesome( void ) : _n( 42 ) { return; }
    	int get( void ) const { return this->_n; }
	private:
    	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

int main()
{
	// Arrray<int> 
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter(  tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

	char **ptr = new char*[10];

	std::cout << ptr << "]\n" << &ptr[0] << std::endl;
  return 0;
}


// 42 test