#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
int main()
{
    //a
    array<int,10>prim{1,1,1,1,1,1,1,1,1,1};
    cout<<"the old array:";
    for(size_t i=0;i<prim.size();i++)
        cout<<prim[i]<<" ";
    cout<<endl;

    for(size_t i=3;i<prim.size();i++)
    {
        int A=0;
        for(int j=2;j<=10;j++)
        {
            if(i%j==0) A=A+1;
        }
        if(A==1) prim[i+1]=0;
    }
    cout<<"New array:";
    for(size_t i=0;i<prim.size();i++)
        cout<<prim[i]<<" ";

    //b
    array<int,100>PRIM_NUMBER;
    for(int i=0;i<100;i++)
        PRIM_NUMBER[i]=i;

    for(int i=2;i<100;i++)
    {
        for(int n=1;n<100;n++)
        {
            if(n*i<=100) PRIM_NUMBER[i+i*n]=0;
            else         continue;
        }
    }

    for(int i=0;i<100;i++)
    {
        int counter=0;
        cout<<PRIM_NUMBER[i]<<setw(6);
        counter++;
        if(counter%5==0) cout<<endl;
    }
    return 0;
}
