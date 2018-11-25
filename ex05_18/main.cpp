#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
   int binary_system1(int integer_2);
   int octonary_system1(int integer_8 );
   int hex_system( int integer_16);

   cout<<"binary system";
   cout<<setw(18)<<"octonary system";
   cout<<setw(15)<<"hex system"<<endl;
   for(int i=1;i<=256;i++)
   { 
       cout<<"\n"<<binary_system1(i);
       cout<<setw(17)<<octonary_system1(i);
       cout<<setw(17)<<hex_system(i);
       if(i%4==0)  cout<<endl;
   }
return 0;
}

int binary_system1(int integer_2)
{
   int k_2=0;
   int binary_system=0;   //二进制
   while(integer_2!=0)
  {
       int i_2=0;
       i_2=integer_2%2;             //已知一个整数n对2取模，如果余数为0，则表示n为偶数，否则n为奇数
       integer_2=integer_2/2;       //1%2=1  , 1/2=0
       binary_system=binary_system+i_2*pow(10,k_2);
       k_2=k_2+1;
   }
   return binary_system;
}

int octonary_system1(int integer_8)
{
    int k_8=0;
    int octonary_number=0; // 8进制
    while(integer_8!=0)
   {
       int i_8=0;
       i_8=integer_8%8;             //已知一个整数n对8取模，如果余数为0，则表示n为偶数，否则n为奇数
       integer_8=integer_8/8;       //1%8=1  , 1/8=0
       octonary_number=octonary_number+i_8*pow(10,k_8);
       k_8=k_8+1;
   }
    return octonary_number;
}

int hex_system(int integer_16)
{
   int k_16=0;
   int hex_number=0;       // 16进制
   while(integer_16!=0)
  {
       int i_16=0;
       i_16=integer_16%16;             //已知一个整数n对16取模，如果余数为0，则表示n为偶数，否则n为奇数
       integer_16=integer_16/16;       //1%16=1  , 1/16=0
       hex_number=hex_number+i_16*pow(10,k_16);
       k_16=k_16+1;
  }
    return hex_number;
}
