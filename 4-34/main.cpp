#include<iostream>
using namespace std;
int main ()
{
    long int A1=0,A2=1,A3=0;

    cout<<"Enter an integer>0 number: ";
    cin>>A1;
    A3=A1;
    if(A1<0)
        {
        cout<<"The number your have entered can not calculate,enter again:  ";
        cin>>A1;
        };

    while(A1>0)  //计算阶乘
    {
        A2=A2*A1;
        A1=A1-1;

    }

    cout<<A3<<"!="<<A2<<endl;
}
