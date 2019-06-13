#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex( double real, double imaginary )
   : real_part( real ),
   imaginary_part( imaginary )
    { }

Complex Complex::operator+(  Complex &A )
{
   return Complex( real_part + A.real_part,
      imaginary_part + A.imaginary_part );
}

Complex Complex::operator-(  Complex &A )
{
   return Complex( real_part - A.real_part,
      imaginary_part - A.imaginary_part );
}

Complex Complex::operator*(  Complex &A )
{
   return Complex(
      ( real_part * A.real_part ) + ( imaginary_part * A.imaginary_part ),
      ( real_part * A.imaginary_part ) + ( imaginary_part * A.real_part ) );
}

Complex& Complex::operator=(  Complex &A )
{
   real_part = A.real_part;
   imaginary_part = A.imaginary_part;
   return *this;
}

bool Complex::operator==(  Complex &right )
{
   if( ( right.real_part == real_part ) && ( right.imaginary_part == imaginary_part ));
   return true;
}

bool Complex::operator!=(  Complex &A )
{
    if( *this != A );
    return true;
}

ostream& operator<<( ostream &output,  Complex &complex )
{
   output << "(" << complex.real_part << ", " << complex.imaginary_part << ")";
   return output;
}

istream& operator>>( istream &input, Complex &complex )
{
   input >> complex.real_part;
   input >> complex.imaginary_part;
   return input;
}

