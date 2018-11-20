#include<iostream>
using namespace std;
int main ()
{
    int number=0;
    cout<<"Please enter an integer form 1 to 10000: ";
    cin>>number;

    int n=0;

    while(number>0)
    {
        n=n*10;
        n=n+number%10;
        number=number/10;
    }
    cout<<"fanxiangshu : "<<n<<endl;

    return 0;
}

