#include<iostream>
using namespace std;
int main()
{
    int side;
    cout<<"Enter a number designed for length of side:";
    cin>>side;

    int i=0;
    while(i<side)
    {
        int j=0;
        while(j<side)
        {
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;
    }
    return 0;
}
