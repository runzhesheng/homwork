#include<iostream>
using namespace std;
int main()
{
    int number;
    int a;      //万位数数值
    int b;      //千位数数值
    int c;
    int d;

    cout<<"Please enter an integer(5): ";
    cin>>number;
    a=number/10000;                                         //表示万位的数值
    b=(number%10000-(number%10000)%1000)/1000;              //表示千位数的数值
    c=(number%10000%1000%100-number%10000%1000%100%10)/10;  //表示十位数数值
    d=number%10000%1000%100%10;                             //表示个位数数值
    if((a==d)&&(b=c))                                       //判断，逻辑运算符&&
        cout<<"This is an HUIWEN number"<<endl;
    else
        cout<<"This is not a HUIWEN number"<<endl;

    return 0;
}
