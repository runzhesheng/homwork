#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//    int x1=0;
//    int x2=0;
//    int x3=0;
//    int x4=0;
//    int x5=0;
//    int x6=0;
//    int x7=0;

//    cout<<"x1=fabs(7.5): "<<x1=fabs(7.5)<<endl;
//    cout<<"x2=floor(7.5): "<<x2=floor(7.5)<<endl;
//    cout<<"x3=fabs(0.0): "<<x3=fabs(0.0)<<endl;
//    cout<<"x4=ceil(0.0): "<<x4=ceil(0.0)<<endl;
//    cout<<"x5=fabs(-6.4): "<<x5=fabs(-6.4)<<endl;
//    cout<<"x6=ceil(-6.4): "<<x6=ceil(-6.4)<<endl;
//    cout<<"x7=ceil( -fabs( -8+ floor(-5.5) ) ): "<<x7=ceil( -fabs( -8+ floor(-5.5) ) )<<endl;

    cout<<"x1=fabs(7.5): "<<fabs(7.5)<<endl;
    cout<<"x2=floor(7.5): "<<floor(7.5)<<endl;
    cout<<"x=floor(-7.5): "<<floor(-7.5)<<endl; //取比-7.5小，离-7.5最接近的整数
    cout<<"x3=fabs(0.0): "<<fabs(0.0)<<endl;
    cout<<"x4=ceil(0.0): "<<ceil(0.0)<<endl;
    cout<<"x5=fabs(-6.4): "<<fabs(-6.4)<<endl;
    cout<<"x4=ceil(6.4): "<<ceil(6.4)<<endl;
    cout<<"x6=ceil(-6.4): "<<ceil(-6.4)<<endl;
    cout<<"x7=ceil( -fabs( -8+ floor(-5.5) ) ): "<<ceil( -fabs( -8+ floor(-5.5) ) )<<endl;
    return 0;
}
