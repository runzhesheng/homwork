#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int sum=0;                   //用来储存输入的数据和
    cout<<"Enter a number for zhiding: ";
    cin>>a;
    int A[a];                  //输入的整数指定数组大小，a不能为变量
    for(int i=0;i<a;i++)
    {
        int number=0;
        cout<<"Enter another number for store:";
        cin>>number;
        A[i]=number;
        sum=sum+A[i];
    }
    cout<<"sun of the number you have entered: "<<sum;
    return 0;
}
