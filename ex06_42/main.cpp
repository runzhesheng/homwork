#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double distanse(double x1,double y1,double x2,double y2);

    cout<<"Enter 1st point's coordination: ";
    int X1;
    int Y1;
    cin>>X1;
    cin>>Y1;

    cout<<"Enter 2nd point's coordination: ";
    int X2;
    int Y2;
    cin>>X2;
    cin>>Y2;

    cout<<"The distance between piont1("<<X1<<","<<Y1<<") &"
         <<" point2("<<X2<<","<<Y2<<") is:"<<distanse(X1,Y1,X2,Y2); //distanse 函数调用
    return 0;
}

double distanse(double x1,double y1,double x2,double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));                         //两点之间的距离计算公式
}                                                                   //调用数学库函数
