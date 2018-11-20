#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x;
    int y;

    int i=0;
    while(i<100)
    {
        cout<<"Enter an number designed for quzheng: ";
        cin>>x;
        y=static_cast<int>(floor(x+0.5));                   //强制类型转换符
        cout<<"The quzheng number you entered is: "<<x<<endl;
        cout<<"The quzheng number you wanted is: "<<y<<endl;
        cout<<endl;
        i++;
    }
    return 0;
}
