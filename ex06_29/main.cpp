#include <iostream>
#include <iomanip>
using namespace std;

bool Prime( int );             //声明函数为布尔类型，返回的变量为逻辑变量
int main()
{
   int count=1;

   cout<< "The prime numbers from 1 to 10000 are:" <<endl;
   cout<< 2;


   for (int i=3; i<10000; i=i+2 )        // 只需要判断奇数，偶数没有可能成为素数
  {
       if (Prime(i))
       {
          count=count+1;
          cout<<setw(6)<<i;

          if (count%10==0)   cout<<endl; //换行，每行十个数字
       }
   }

   cout << endl;
   cout<<"There are "<<count<<" prime numbers between 1 and 10000"<<endl;
}


bool Prime( int n )
{

   for (int i2=2; i2<=n/2;i2++)         // 只需要判断奇数
   {
      if ( n%i2==0 )  return false;     //判断是否为素数，不会被除自身的任何整数整除
   }

   return true;                         // bool类型，返回true o false
}
