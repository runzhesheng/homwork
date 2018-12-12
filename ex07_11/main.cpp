#include<iostream>
#include<array>
using namespace std;
int main()
{
    const size_t arraysize1=10;
    const size_t arraysize2=15;
    array<int,arraysize1>counts;
    for(size_t i=0;i<counts.size();i++)
        counts[i]=0;

    array<int,arraysize2>bonus;
    for(size_t i=0;i<bonus.size();i++)
        bonus[i]=0;
    for(size_t i=0;i<bonus.size();i++)
        bonus[i]++;

    const size_t arraysize3=12;
    array<double,arraysize3>monthlyTemperature;
    cout<<"Enter each elements of monthlyTmperature.";
    for(size_t i=0;i<monthlyTemperature.size();i++)
        cin>>monthlyTemperature[i];

    const size_t arraysize4=5;
    array<int,arraysize4> bestscore={1,2,3,4,5};
    cout<<"each elements of bestscores :"<<endl;
    for(size_t i=0;i<bestscore.size();i++)
        cout<<bestscore[i]<<endl;

    return 0;







}
