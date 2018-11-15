#include <iostream>
using namespace std;
int main()
{
    int even_number(int number);     //函数原型
    int i=0;
    int integer;
    while(i<10)
    {
        cout<<"Enter an interger :";
        cin>>integer;
        even_number(integer);        //函数调用，值传递
    }
    return 0;
}

void even_number(int number)
{
    if(number%2==0)                  //如果余数为 0，则输入的数为偶数
        cout<<boolalpha<<true<<",and this integer is a even number"<<endl;
    else
        cout<<boolalpha<<false<<",and this integerr is not a even number"<<endl;
        cout<<endl;

}
