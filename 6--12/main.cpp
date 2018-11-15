#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main ()
{
      float hour1;
      float hour2;
      float hour3;

      float charge1;
      float charge2;
      float charge3;

      float total_hour;
      float total_charge;
      float charge(float hour );                                 //charge函数声明

      cout<<"Enter  car1 parking hours: ";
      cin>>hour1;
      while(hour1<0 && hour1>24)
      {
            cout<<"incorrect hour1 entered,try again: ";
            cin>>hour1;
      }


      cout<<"Enter  car2 parking hours: ";
      cin>>hour2;
      while(hour2<0 && hour2>24)
      {
            cout<<"incorrect hour1 entered,try again: ";
            cin>>hour2;
      }


      cout<<"Enter  car3 parking hours: ";
      cin>>hour3;
      while(hour3<0 && hour3>24)
      {
            cout<<"incorrect hour1 entered,try again: ";
            cin>>hour3;
      }

      charge1=charge(hour1);                                   //调用charge 函数
      charge2=charge(hour2);
      charge3=charge(hour3);

      total_hour=hour1+hour2+hour3;
      total_charge=charge1+charge2+charge3;                   //运用<<setw(10)<<setiosflags(ios::left)控制输出格式
      cout<<setw(10)<<"Car"<<setw(20)<<setprecision(1)<<"Hour"<<setw(30)<<setprecision(2)<<"Charge"<<endl;
      cout<<setw(10)<<"1"<<setw(20)<<setprecision(1)<<hour1<<setw(30)<<setprecision(2)<<charge1<<endl;
      cout<<setw(10)<<"2"<<setw(20)<<setprecision(1)<<hour2<<setw(30)<<setprecision(2)<<charge2<<endl;
      cout<<setw(10)<<"3"<<setw(20)<<setprecision(1)<<hour3<<setw(30)<<setprecision(2)<<charge3<<endl;
      cout<<setw(10)<<"TOTAL"<<setw(20)<<setprecision(1)<<total_hour<<setw(30)<<setprecision(2)<<total_charge<<endl;
}
  float charge(float hour)                                   //charge函数定义
  {
      int money;
      if (hour<=3)          money=2;
      if (hour>3 && hour<24)  money=(ceil(hour)-3)*0.5+2;    //ceil函数取整，ceil（6.4）=7
          if(money>10)      money=10;
      if (hour==24)          money=10;

      return money;                                         //返回的停车费费为money
  }
