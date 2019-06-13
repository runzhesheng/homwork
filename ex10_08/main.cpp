#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
   Complex A(0,0);
   Complex B(4,8);
   Complex C(2,4);

   cout<<"B: "<<B<<endl;
   cout<<"C: "<<C<<endl;

   A=B+C;
   cout<<"A=B+C= "<<A<<endl;
   A=B*C;
   cout<<"A=B*C= "<<A<<endl;
   A=B-C;
   cout<<"A=B-C= "<<A<<endl;

   if(B!=C)
       cout<<B<<"!="<<C<<endl;

   if(A==C)
      cout<<A<<"="<<C<<endl;
   return 0;
}
