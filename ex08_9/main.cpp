#include<iostream>
using namespace std;
int main()
{
    long value1=200000;
    long value2=0;

    long *value1_Ptr;
    value1_Ptr=&value1;

    cout<<"*value1_Ptr= "<<*value1_Ptr<<endl;

    value2=*value1_Ptr;

    cout<<"value2= "<<value2<<endl;

    cout<<"&value1= "<<&value1<<endl;

    cout<<"value1_Ptr= "<<value1_Ptr<<endl;

    return 0;

}
