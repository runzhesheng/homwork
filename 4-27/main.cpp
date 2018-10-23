#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int j=0;
    int k_2=0;
    int integer_2=0;
    int binary_system=0;   //二进制数

    int k_8=0;
    int integer_8=0;
    int octonary_number=0; // 8进制数

    int k_16=0;
    int integer_16=0;
    int hex_number=0;       //16进制
    while(j<1000)
 {        //十进制转换成二进制
          cout<<"Please enter an integer for binary: ";
          cin>>integer_2;
          while(integer_2!=0)
        {
              int i_2=0;
              i_2=integer_2%2;             //已知一个整数n对2取模，如果余数为0，则表示n为偶数，否则n为奇数
              integer_2=integer_2/2;  //1%2=1  , 1/2=0
              binary_system=binary_system+i_2*pow(10,k_2);
              k_2=k_2+1;
        }
           cout<<"a binary system is: "<<binary_system<<endl;

            //十进制转换成8进制
           cout<<"Please enter an integer for octonary: ";
           cin>>integer_8;
           while(integer_8!=0)
         {
               int i_8=0;
               i_8=integer_8%8;             //已知一个整数n对2取模，如果余数为0，则表示n为偶数，否则n为奇数
               integer_8=integer_8/8;  //1%8=1  , 1/8=0
               octonary_number=octonary_number+i_8*pow(10,k_8);
               k_8=k_8+1;
         }
            cout<<"a octonary number is: "<<octonary_number<<endl;

            //十进制转换成16进制
            cout<<"Please enter an integer for  hexadecimal: ";
            cin>>integer_16;
            while(integer_16!=0)
          {
                int i_16=0;
                i_16=integer_16%16;             //已知一个整数n对2取模，如果余数为0，则表示n为偶数，否则n为奇数
                integer_16=integer_16/16;  //1%16=1  , 1/16=0
                hex_number=hex_number+i_16*pow(10,k_16);
                k_16=k_16+1;
          }
             cout<<"a hex number is: "<<hex_number<<endl;

           j=j+1;
  }
return 0;
}
