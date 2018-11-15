#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number designed for length of side"<<endl;
    cout<<"2 for @"<<endl;
    cout<<"3 for #"<<endl;
    cout<<"4 for $ "<<endl;
    cout<<"5 for % : ";
    int k=0;
    while(k<10)
    {

       int side=0;
       cin>>side;
       string A;
       if(side==2) A="@";              //不同的数字对应着不同的字符
       if(side==3) A="#";
       if(side==4) A="$";
       if(side==5) A="%";

        int i=0;
        while(i<side)
        {

              int j=0;
              while(j<side)
             {
               cout<<A;
               j++;
             }

              cout<<endl;
              i++;

        }
        cout<<endl;

   }
       return 0;
}
