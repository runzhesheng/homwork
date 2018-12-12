#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main()
{

    int integer1=0;
    int integer2=0;
    vector<int>integer(20);

    cout<<"Enter a integer from 10 to 100 foe 20 times:  ";
    cin>>integer1;

    while(integer1<10 || integer1>100)                    //判断输入整数的有效性
    {
        cout<<"incorrect integer entered,try again for 20 times:  ";
        cin>>integer1;
    }

    int i=0;
    while(i<19)
    {
        integer[i]=integer1;

        cout<<"Enter another integer from 10 to 100 for 20 times:  ";
        cin>>integer2;
        while(integer2<10 || integer2>100)
        {
           cout<<"incorrect integer entered,try again:  "<<endl;
           cin>>integer2;
        }


        int j=0;                                       //和之前输入的数据进行单个重复对比
        while(j<=i)                                    //直到输入的数据不和之前的重复为止
        {

            while(integer2==integer[j])
             {

                 cout<<"repeading integer entered,try again:  ";
                 cin>>integer2;
                 while(integer2<10 || integer2>100)      //再次确定输入数字的有效应
                 {
                    cout<<"incorrect integer entered,try again:  "<<endl;
                    cin>>integer2;
                 }

             }
         j=j+1;
       }
   i=i+1;
  }

    for(size_t i=0;i<integer.size();i++)
       cout<<" "<<integer[i];

    vector<int>INTEGER(20);
    for(size_t i=0;i<integer.size();i++)
    INTEGER.push_back(integer[i]);






   return 0;
}
