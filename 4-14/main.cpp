#include<iostream>
using namespace std;
int main()
{
        float account_number=0;    //账户号码
        float month_begin_debt=0;//账户月初欠款
        float expense_month=0;      // 账户月消费
        float deposit_month=0;       //账户月存款
        float credit_limit=0;   //账户赊账限度
        float new_debt;
        int i=0;
                 //while(account_number!=-1)
              while(i<1000)
         {
            cout<<"Please enter account number(or -1 to quit) : "; //用户输入账户号码
            cin>>account_number;
           //cout<<endl;
            if(account_number==-1 )    break;
                                                                   //标记控制值的位置必须必是在while末尾？
            cout<<"Please enter debt at the beginning of the month: ";//用户输入月初欠款
            cin>>month_begin_debt;
            //cout<<endl;
            cout<<"Please enter expense for the month: ";//用户输入 月消费
            cin>>expense_month;
            //cout<<endl;
            cout<<"Please enter deposit for the month: ";//用户输入 月存款
            cin>>deposit_month;
           // cout<<endl;
            cout<<"Please enter credit limit: ";//用户输入 赊账限度
            cin>>credit_limit;
            //cout<<endl;
            new_debt=month_begin_debt+expense_month-deposit_month;
              if(new_debt>credit_limit)
              {
                       cout<<"New debt is: "<<new_debt<<endl;
                       cout<<"Account: "<<account_number<<endl;
                       cout<<"Credit limit: "<<credit_limit<<endl;
                       cout<<"Debt : "<<new_debt<<endl;
                       cout<<"Credit limit exceed"<<endl;
              }
              else
                      cout<<"New debt is:"<<new_debt<<endl;
              i++;
       }
return 0;
}






