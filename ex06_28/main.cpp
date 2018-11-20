#include<iostream>
using namespace std;
int main()
{
    int i;                           // i控制选定数范围
    int n;
    int j;                           //j指定除法数
    int s;                           //s记录累加因子之和
    cout<<"Enter the upper bound: ";
    cin>>n;

    for( i=2; i<=n; i++ )
    {
        s=0;                         // 保证每次循环时s的初值为0

        for( j=1; j<i; j++ )
        {
            if(i%j == 0)             // 判断j是否为i的因子
                s=s+j;               // 因子的和相加
        }

        if(s == i)                   // 断因子这和是否和原数相等
            cout<<"It's a perfect number: "<< i <<endl;
    }

    return 0;

}
