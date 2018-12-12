#include<iostream>
#include<array>
using namespace std;
int main()
{

    const size_t rows=2;
    const size_t columns=3;
    array< array<int,columns>,rows> t={1,2,3,4,5,6};

    cout<<"There are "<<rows<<" rows in the t"<<endl;
    cout<<"There are "<<columns<<" columns in the t"<<endl;
    cout<<"There are "<<columns*rows<<" elements in the t"<<endl;

    cout<<"The second row of t:";
    for(size_t i=0;i<columns;i++)
        cout<<t[1][i]<<" ";
    cout<<endl;

    cout<<"The socond column of t:";
    for(size_t i=0;i<rows;i++)
        cout<<t[i][1]<<" ";
    cout<<endl;

    t[0][1]=0;
    t[0][0]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;

    for(size_t i=0;i<rows;i++)
        for(size_t j=0;columns;j++)
            t[i][j]=0;
    for(size_t i=0;i<rows;i++)
        for(size_t j=0;columns;j++)
            cout<<t[i][j]<<" ";
    cout<<endl;

    cout<<"Enter new elements of t:";
    for(size_t i=0;i<rows;i++)
        for(size_t j=0;columns;j++)
            cin>>t[i][j];

    int A=0;
    for(size_t i=0;i<rows;i++)
        for(size_t j=0;columns;j++)
        {
            if(A<t[i][j]) A=A;
            else          A=t[i][j];
        }

    cout<<"The smallest of t:"<<A;

    int B=0;
    for(size_t i=0;i<rows;i++)
       B=B+t[i][1];
    cout<<"Sum of second columns"<<endl;



    cout<<"    [0] [1] [2]"<<endl;
    for(size_t i=0;i<rows;i++)
    {
        cout<<"["<<i<<"] ";
        for(size_t j;j<columns;j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }

return 0;

}
