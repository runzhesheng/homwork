#include<iostream>
#define pi 3.14159
using namespace std;
int main()
{

    double r=0;               //圆的半径

    cout<<"Enter a r:";
    cin>>r;

    cout<<"Girth of a circle : "<<2*pi*r<<endl;
    cout<<"Area of a circle : "<<r*r*pi<<endl;
    cout<<"Diameter of a circle : "<<r*r*pi<<endl;
    return 0;


}
