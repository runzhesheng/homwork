#include <iostream>
using namespace std;

class Complex
{
   friend ostream &operator<<( ostream &, Complex & );
   friend istream &operator>>( istream &, Complex & );
public:
   Complex( double = 0.0, double = 0.0 );
   Complex operator+( Complex& ); // +
   Complex operator-( Complex& ); // -
   Complex operator*( Complex& ); // *
   Complex& operator=( Complex&); //
   bool operator==( Complex& );
   bool operator!=( Complex& );
private:
   double real_part;
   double imaginary_part;
};
