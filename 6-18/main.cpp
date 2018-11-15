#include<iostream>
using namespace std;

int integerPower(int base2, int exponent)        //main函数之前的函数定义，无需声明
{
    int i=0;
    int base1=1;

    while(i<exponent)                            //base的 exponent 次方 ， 循环exponent次
    {
        base2=base1*base2;
        base1=base2;
        i++;
    }
    return base2;
}

int main()
{
    int base;
    int exponent;
    int integerPower(int base2, int exponent);   //函数声明

    cout<<"Enter a base: ";
    cin>>base;
    cout<<"Enter an exponent: ";
    cin>>exponent;

    while(exponent<0)
    {
        cout<<"Incorrect exponent entered,try again: ";
        cin>>exponent;
    }
    if (exponent==0)                             //0次方为1
        cout<<"integerPower(base,exponent): 1"<<endl;
    else
        cout<<"integerPower(base,exponent): "<<integerPower(base,exponent)<<endl;


    return 0;

}
