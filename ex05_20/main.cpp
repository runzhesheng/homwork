#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int C=0;
    for(int side1=1;side1<=50;side1++)
    {
        for(int  side2=1;side2<=50;side2++)
        {
            for(int hypotenuse=1;hypotenuse<=50;hypotenuse++)
            {
                int A=0;
                int B=0;
                A=side1*side1+side2*side2;
                B=hypotenuse*hypotenuse;
                if(A==B)
                {
                    cout<<"\nside1= "<<side1<<endl;
                    cout<<"side2= "<<side2<<endl;
                    cout<<"hypotenuse="<<hypotenuse<<endl;
                    cout<<"pow("<<side1<<",2)+";
                    cout<<"pow("<<side2<<",2)=";
                    cout<<"pow("<<hypotenuse<<",2)"<<endl;
                    C++;
                }
            }
        }
    }
    cout<<"There are "<<C/2<<" numbers of bidagelasisnajioyuan have been found.";
    return 0;
}
