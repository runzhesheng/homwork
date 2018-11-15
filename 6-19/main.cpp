#include <iostream>
#include <cmath>                                    //使用sqrt开方函数，需要包含头文件<cmath>

using namespace std;
int main()
{
    double line_1;                                  //两条直角三角形的直角边
    double line_2;
    double hypoyenuse1;                             //直角三角形的斜边
    double hypoyenuse(double line1,double line2);   //函数声明

    cout<<"Enter line1: ";
    cin>>line_1;
    while(line_1<0)                                 //确定输入直角边长度数值的合法性
    {                                               //一直循环输入，直到输入大于0的直角边长为止
        cout<<"Incorrect number line1 entered,try again: ";
        cin>>line_1;
    }

    cout<<"Enter line2: ";
    cin>>line_2;
    while(line_2<0)
    {
        cout<<"Incorrect number line2 entered,try again: ";
        cin>>line_2;
    }

    cout<<"The hypoyenuse calculated is: "<<hypoyenuse(line_1,line_2);  //函数调用
    return 0;
}

double  hypoyenuse(double line1,double line2)       //函数定义
{
    return sqrt(line1*line1+line2*line2);
}
