#include<iostream>
using namespace std;
int main()
{
    void smallest(double a,double b,double c);
    double a=0;
    cout<<"Enter first number A: ";
    cin>>a;

    double b=0;
    cout<<"Enter second number B: ";
    cin>>b;

    double c=0;
    cout<<"Enter third number C: ";
    cin>>c;

    smallest(a,b,c);
    return 0;
}

void smallest(double a,double b,double c)
{
    double small;                                              //将所有大小情况进行排列
    if(a<b&&b<c) small=a;
    if(a<c&&c<b) small=a;
    if(b<c&&c<a) small=b;
    if(b<a&&a<c) small=b;
    if(c<a&&a<b) small=c;
    if(c<b&&b<a) small=c;

    cout<<"Smallest number is: "<<small<<endl;
}
