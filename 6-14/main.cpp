#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{


     float x1=0;                                      //精确到小数点后0位数
     float y1=0;
     cout<<"Enter an number1: ";
     cin>>x1;
     y1=(floor(x1+0.5));                              // floor(6.22*10+0.5)/10=6.2
     cout<<"Round to integer("<<setprecision(6)<<x1<<"): "<<fixed<<setprecision(1)<<y1<<endl;

     float x2=0;                                      //精确到小数点后1位数
     float y2=0;
     cout<<"\nEnter an number2: ";
     cin>>x2;
     y2=(floor(x2*10+0.5)/10);                        // floor(6.27*10+0.5)/10=6.3
     cout<<"Round to tenths("<<setprecision(6)<<x2<<"): "<<fixed<<setprecision(2)<<y2<<endl;

     float x3=0;                                      //精确到小数点后2位数
     float y3=0;
     cout<<"\nEnter an number3: ";
     cin>>x3;
     y3=(floor(x3*100+0.5)/100);                      // floor(6.757*100+0.5)/100=6.75
     cout<<"Round to hundreths("<<setprecision(6)<<x3<<"): "<<fixed<<setprecision(3)<<y3<<endl;


     float x4=0;                                      //精确到小数点后3位数
     float y4=0;
     cout<<"\nEnter an number3: ";
     cin>>x4;
     y4=(floor(x4*1000+0.5)/1000);                    // floor(6.7577*1000+0.5)/1000=6.758
     cout<<"Round to thousandths("<<setprecision(6)<<x4<<"): "<<fixed<<setprecision(4)<<y4<<endl;

     return 0;
}
