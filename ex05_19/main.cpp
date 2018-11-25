#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double jishu(int i);
    double j=1;
    while(j<=1000)
    {
        int k=1;
        double PI=0;
        while(k<=j)
        {
            PI=PI+pow(-1,k)*4/jishu(k);
            k=k+1;
        }

        cout<<"\napproximate value of pi("<<j<<")"<<-PI<<endl;

        j=j+1;
    }

}
double jishu(int i)
{
    double A=0;
    if(i==1)
        return A=1;
    else              //偶数项为负数
        return A=2*i-1;
   // if(i%2==1)               //奇数项为正数
   //     return A=2*i-1;
}
