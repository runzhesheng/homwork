#include<iostream>
using namespace std;
int main()
{
    int pow(int,int);                     //求幂函数声明
    int base;
    int exponent;
    cout<<"base: ";
    cin>>base;
    cout<<"exponent: ";
    cin>>exponent;
    while(exponent<1)
    {
        cout<<"Incorrect exponenet entered,try again: ";
        cin>>exponent;                    //判断输入的指数的合法性
    }
    cout<<"Answer: "<<pow(base,exponent); //求幂函数调用
}

int pow(int base,int exponent)            //求幂函数定义
{
    if(exponent==1)
        return base;
    else
        return base*pow(base,exponent-1);
}
