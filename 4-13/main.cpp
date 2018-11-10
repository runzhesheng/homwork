#include<iostream>
using namespace std;
int main ()
{
    int i=1;
    float total_driven=0;
    float total_gallon=0;

    while(i<1000)
    {
        float miles_driven=0;                         //每次循环都进行初始化
        float gallons_used=0;
        float MGP=0;
        float total_MGP;
        cout<<"Enter miles driven( or -1 to quit) : ";//输入行驶英里
        cin>>miles_driven;
        if(miles_driven==-1)  break;

        cout<<"Enter gallons used : ";                //输入使用的汽油加仑数
        cin>>gallons_used;

        MGP=miles_driven/gallons_used;                //计算单位加仑行驶英里
        cout<<"MGP this trip is: "<<MGP<<endl;


        total_driven=total_driven+miles_driven;
        total_gallon=total_gallon+gallons_used;

        total_MGP=total_driven/total_gallon;
        cout<<"total MGP: "<<total_MGP<<endl;

    }
    return 0;
}
