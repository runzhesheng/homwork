#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int multiple(int number,int n_number);           //函数声明
    int number1;
    int number2;
    int i=0;
    while (i!=-1)
    {
        number1=5;
        number2=9;
        cout<<"Enter a number1(or -1 to quit): ";
        cin>>number1;
        if(number1==-1)  break;

        cout<<"Enter a number2(or -1 to quit): ";
        cin>>number2;
        if(number2==-1)  break;

        multiple(number1,number2);       //函数调用
    }

    return 0;
}

void multiple(int number,int n_number)               //函数定义
{
    double a;
    double b;
    double c;
    double d;

     a=static_cast<double>(n_number);                //强制类型转换运算符
     b=static_cast<double>(number) ;                  //对计算出来的倍数进行取整
     c=a/b;
     d=ceil(c);

     if(c==d)
     {
         cout<<boolalpha<<true<<endl;                 //流操纵符指定每一个布尔变量的值应该为
         cout<<"number2 is number1's beushi "<<endl;  //单词"true" 或者"false"
         cout<<endl;
     }

     else
     {
         cout<<boolalpha<<false<<endl;
         cout<<"number2 is not number1's beushi "<<endl;
         cout<<endl;
     }
}
