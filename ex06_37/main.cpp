#include<iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main()
{
    for(unsigned int counter=0; counter<=10; counter++)
        cout<<"Fibonacci("<<counter<<")="
           <<fibonacci(counter)<<endl;
    cout<<"\nfibonacci(20)="<<fibonacci(20)<<endl;
    cout<<"\nfibonacci(30)="<<fibonacci(30)<<endl;
    cout<<"\nfibonacci(35)="<<fibonacci(35)<<endl;
}

unsigned long fibonacci(unsigned long number)
{
    if((0==number)||(1==number))
        return number;
    else
    {
        int m=0;
        int n=1;
        int A=0;
        for(int i=0;i<number-1;i++)    // Number-1,很关键
        {
            A=n+m;
            if(i%2==0)  m=A;
            if(i%2==1)  n=A;
        }
        return A;
    }

}
