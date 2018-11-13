#include<iostream>
using namespace std;

inline max(int compare1,int compare2)                //inline声明内置函数，提高运行效率
{

    return compare1>compare2? compare1:compare2;
}

int main ()
{
    int number;                                      //改数字指定循环次数，比较次数，输入次数
    int compare1;
    int compare2;
    int A;                                           //用于储存已比较的两个数之间较大的数

    cout<<"Enter a number for appiont while times: ";
    cin>>number;

    cout<<"Enter a number for comparision: ";        //第一次输入用于比较的数字
    cin>>compare1;

    for(int i=0;i<number-1;i++)
    {
        cout<<"Enter another number for comparision: ";
        cin>>compare2;

        A=max(compare1,compare2);                    //第二次输入用于比较的数字
        compare1=compare2;                           //进行第二次比较的数字为第二次输入的数字和第三次输入的数字
    }

    cout<<"The biggest number you have entered is:"<<A<<endl;
    return 0;
}
