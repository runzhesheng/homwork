#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int value=0;
    int number=0;
    int average=0;              //平均值

    while(number!=9999)         //标记值循环
    {
        value=value+number;     //用于计算平均值
        count=count+1;           //计数器

        cout<<"Enter a 数字: ";
        cin>>number;

        if(number==9999)
            count=count-1;

    }
    if(count==0)
        cout<<"No numbers are entered";

    average=value/count;
    cout<<"Average of number you have entered is: "<<average<<endl;

    return 0;
}
