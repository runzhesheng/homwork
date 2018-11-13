#include<iostream>
using namespace std;
int main()
{
    int integer[15];                                    //储存输入的整数

    int integer1=0;
    int integer2=0;
    int i=0;
    int chengji=1;                                      //奇数的乘积
    int counter=0;                                      //奇数个数计数器

    cout<<"Enter a integer from 1 to 15:  ";
    cin>>integer1;

    while(integer1<1 || integer1>15)                         //判断输入整数的合法性
    {                                                     // '||'为逻辑运算符
        cout<<"incorrect integer entered,try again:  ";
        cin>>integer1;
    }

    while(i<14)
  {


        integer[i]=integer1;                           //数组容器用于储存已经输入的数据

        cout<<"Enter another integer from 1 to 15:  ";
        cin>>integer2;


        int j=0;                                       //和之前输入的数据进行单个重复对比
        while(j<=i)                                    //直到输入的数据不和之前的重复为止
        {                                              //确保乱序输入的数字只能是1-15中的某一个数字
            while(integer2<1 || integer2>15)
            {
               cout<<"incorrect integer entered,try again:  "<<endl;
               cin>>integer2;
            }

            while(integer2==integer[j])
             {

                 cout<<"repeading integer entered,try again:  "<<endl;
                 cin>>integer2;
                 while(integer2<1 || integer2>15)      //再次确定输入数字的合法性
                 {
                    cout<<"incorrect integer entered,try again:  "<<endl;
                    cin>>integer2;
                 }

             }
            j=j+1;
        }



       if(integer2 %2==1)
       {
           counter++;
           chengji=chengji*integer2 ;
       }


       integer1=integer2;
       i=i+1;
   }

       if(counter==0)
           cout<<"No odd numbers are entered";

       else
      {
           cout<<"The number of odd you have entered is: "<<counter<<endl;
           cout<<"And the chengji of these odd is: "<<chengji<<endl;
      }
       return 0;
}
