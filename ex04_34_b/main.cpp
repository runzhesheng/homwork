#include<iostream>
using namespace std;
int main()
{
    int i;

    cout<<"sign for n! precision: ";
    cin>>i;

    int k=1;
    double e1=1;
    double e2=0;
    double jiecheng( int n);            //函数声明
    while(k<=i)
    {
        e2=e1+1/jiecheng(k);            //函数调用
        e1=e2;
        k=k+1;
    }

    cout<<"e calculated: "<<e2<<"="<<"1";

    int j=1;
    while(j<=i)
    {
        cout<<"+1/"<<j<<"!";            //循环输出 1+1j+/1！+1/2!+1/3!.....
        j=j+1;
    }
    return 0;

}

double jiecheng(int n)                  // n! 阶乘计算函数定义
{
    int n1=1;
    int n2=0;

    if(n==1)
    {
        n=1;
        return n;
    }
    while(n>0)                           //阶乘计算
    {
        n2=n1*n;
        n1=n2;
        n=n-1;
    }
    return n2;
}
