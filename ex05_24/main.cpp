
#include <iostream>
using namespace std;

int main()
{
   int A;
   cout<<"Enter a number for size(1-15):";
   cin>>A;

   for ( int B = 1; B<= A - 2; B += 2 )
   {
      for ( int C = ( A - B ) / 2;C > 0; C-- )
         cout << ' ';

      for ( int D = 1; D <= B; D++ )
         cout << '*';
         cout<<endl;
   }

   for ( int B = A; B >= 0; B -= 2 )
   {
      for ( int C = ( A- B ) / 2; C > 0; C-- )
         cout << ' ';

      for ( int D = 1; D <= B; D++ )
         cout << '*';
         cout<<endl;
   }
   return 0;
}
