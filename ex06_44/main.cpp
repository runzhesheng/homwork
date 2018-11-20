#include<iostream>
using namespace std;
int main()
{
    int mystery(int x,int y);

    int x=0;
    int y=0;

    cout<<"Enter two integers: ";
    cin>>x;
    cin>>y;

    cout<<"The result is "<<mystery(x,y)<<endl;
    return 0;
}

int mystery(int a,int b)            // 用于输入两个数，只返回第一个数
{
    if(1==b)
        return a;
    else
         a+mystery(a,b-1);

}
