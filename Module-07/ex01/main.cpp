
#include "Iter.hpp"


int main ()
{ 
    int arr[] = {2,5,2,5,2};
    iter(&arr[0], 5, &print<int>);
}

// class Awesome
// {
// 	public:
//     	Awesome( void ) : _n( 42 ) { return; }
//     	int get( void ) const { return this->_n; }
// 	private:
//     	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
// 	o << rhs.get();
// 	return o;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter(  tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }


// 42 test