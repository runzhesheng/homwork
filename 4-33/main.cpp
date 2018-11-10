#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float first=0;
    float second=0;
    float third=0;
    float A=0,B=0,C=0,D=0,E=0;
    float max(float a,float b);
    float min(float c,float d);
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;
    cout<<"Enter third number : ";
    cin>>third;

    if(first>=second&&second>=third) E=second;   //将所有第二大的整数列出来
    if(first>=third&&third>=second)  E=third;    // >=是必须的
    if(second>=first&&first>=third)  E=first;
    if(second>=third&&third>=first)  E=third;
    if(third>=first&&first>=second)  E=first;
    if(third>=second&&second>=first) E=second;

    A=max(first,second);
    B=max(A,third);                              //求最大数
    C=min(first,second);
    D=min(C,third);                              //求最小数

    if(B*B==E*E+D*D) cout<<"The three number you have entered can make a triangle"<<endl;
                           //判断能否构成直角三角形
    else   cout<<"The three number you have entered can not make a triangle"<<endl;

    return 0;
}

float max(float a,float b)
{
    if(a>b) return a;
    else    return b;
}


float min(float c, float d)
{
    if(c<d) return c;
    else    return d;
}
