#include<iostream>
#include <cmath>
using namespace std;

inline double circleArea(const double r)
{
     double area;
     double pi=3.1415926535;
     area=pow(r,2)*pi;
     return area;
}

int main()
{
    cout<<"Enter R of a circle: ";
    double R;
    cin>>R;
    while(R<=0)
    {
        cout<<"Incorrect R entered,try again: ";
        cin>>R;
    }

    cout<<"Area of the circle: "<<circleArea(R)<<endl;     //inline 限定符。该函数调用的地方
    return 0;                                              //生成函数体代码的副本，以避免函数调用
}                                                          //节省了每次调用函数带来的额外时间开支

