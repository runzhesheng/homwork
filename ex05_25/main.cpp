
#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int A=0;
    for( count=1;count<=10&&(A!=1);count++)
    {
         if(count==5)
             A=1;
         else
             cout<<count<<" ";
    }
    cout<<"\nquit at count="<<count-1<<endl;
}
