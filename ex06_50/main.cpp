#include<iostream>
using namespace std;

int tripleByValue(int countant)
{
    return countant*3;
}

void tripleByRefernce(int &countant)    //引用形参是函数调用中相应的实参名。引用的是调用函数
{                                       //main函数中的原始变量，并且被调函数可以直接修改这一
    countant=countant*3;                //个原始变量。
}                                       //引用还可以在函数中用作其他变量的别名，一但一个引用
                                        //被声明为另一个变量的别名，在别名（即引用）上执行的
int main()                              //的所有操作实际上作用在原始变量上
{
    int count=4;
    cout<<"Count = "<<count<<endl;                                           //count=4
    cout<<"Value returned by triple_by_Value = "<<tripleByValue(count)<<endl;//count=12
    cout<<"After triple(Value),count = "<<count<<endl;                       //count=4

    cout<<"\nCount = "<<count<<endl;                                         //count=4
    tripleByRefernce(count);
    cout<<"Value returned by triple_by_Referenc= "<<count<<endl;             //count=12

    int &SUMMER=count;
    SUMMER=SUMMER+1;
    cout<<"\nNew count = "<<count<<endl;                                     //count=13
    return 0;
}
