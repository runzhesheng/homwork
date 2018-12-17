#include<iostream>
using namespace std;
int main()
{

    unsigned int values[5]={2,4,6,8,10};

    unsigned int* values_Ptr=0;

    for(int i=0;i<5;i++)
    {
        cout<<"\nvalues["<<i<<"]="<<values[i]<<endl;
    }

  //values_Ptr=values;
    values_Ptr=&values[0];

    for(int i=0;i<5;i++)
    {
        cout<<"\nvalues["<<i<<"]="<<*(values_Ptr+i);
    }

    for(int i=0;i<5;i++)
    {
        cout<<"\nvalues["<<i<<"]="<<*(values+i);
    }

    for(int i=0;i<5;i++)
    {
        cout<<"\nvalues["<<i<<"]="<<values_Ptr[i];
    }

    cout<<"values[4]"<<values[4]<<endl;
    cout<<"*(values_Ptr+4)"<<*(values_Ptr+4)<<endl;
    cout<<"values_Ptr[4]"<<values_Ptr[4]<<endl;
    cout<<"*(values+4)"<<*(values+4)<<endl;

//  values_ptr+3 代表values[3]的地址，该位置储存的值是 8


}
