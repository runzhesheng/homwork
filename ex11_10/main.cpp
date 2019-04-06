#include<iostream>
#include"account.h"
#include"checking_account.h"
#include"savings_account.h"

using namespace std;

int main()
{
    double output_money=0;
    double input_money=0;

    cout<<"the rest money of your account is 5000"<<endl;
    cout<<"please enter the money you wangt to output: ";
    cin>>output_money;
    cout<<endl;
    cout<<"Please enter the money you want to input: ";
    cin>>input_money;

    cout<<"teating Account:"<<endl;
    Account account1(5000);
    cout<<"money left: "<<account1.get_balance()-account1.debit(output_money)+account1.credit(input_money);
    cout<<endl;

    cout<<"teating Checking_Account:"<<endl;
    Checking_Account check1(5000,10);
    cout<<"money left: "<<check1.get_balance()+check1.set_credit(input_money)-check1.set_debit(input_money)*input_money-10;
    cout<<endl;

     cout<<"teating saving_account:"<<endl;
    Savings_Account save1(5000,0.1);
    cout<<"money left: "<<save1.get_balance()+5000*0.1;

    return 0;
}
