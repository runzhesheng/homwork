#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    bool flip(int i);                   //bool类型函数声明
    unsigned int frequency1=0;
    unsigned int frequency2=0;

    for(unsigned int i=1;i<=100;i++)
    {
        unsigned int face=1+rand()%2;

        //if(face==2)
        if(flip(face)==true)            //flip函数调用,计数器计数
            frequency1=frequency1+1;

        //if(face==1)
        if(flip(face)==false)
            frequency2=frequency2+1;

    }
    cout<<"Face"<<setw(13)<<"Frequency"<<endl;
    cout<<"Head"<<setw(13)<<frequency1<<endl;
    cout<<"Tail"<<setw(13)<<frequency2<<endl;
    return 0;
}

bool flip(int i)
{
    if(i==1) return true;
    else     return false;
}
