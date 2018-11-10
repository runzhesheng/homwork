#include <iostream>
using namespace std;
int main()
{
    int max(int a,int b);
    int counter=0;
    int number1=0;
    int number2=0;
    cout<<"Enter an integer: ";
    cin>>number1;

    while(counter<9)               //重复9次，一共输入了10个整数
    {
        int c=0;
        cout<<"Enter another integer: ";
        cin>>number2;

        c=max(number1,number2);    //将输入的数依次对比
        cout<<"Largest: "<<c<<endl;
        number1=c;                 //将上一次对比的对大数给number1，再和新输入的数进行对比

        counter++;
    }
    return 0;
}

int max( int a, int b)
{
    return (a>b? a:b) ;
}
