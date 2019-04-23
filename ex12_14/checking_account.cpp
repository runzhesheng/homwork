#include<iostream>
#include"checking_account.h"
using namespace std;

Checking_Account::Checking_Account(double balance,double input,double output, double d_p)
    :Account(balance,input,output)
{
    set_deal_price(d_p);
}

void Checking_Account::set_deal_price(double d_p)
{
    deal_price=d_p;
}
double Checking_Account::get_deal_price() const
{

    return deal_price;
}

void Checking_Account::print() const
{
    cout<<"deal price: "<<get_deal_price()<<endl;
    Account::print();
    cout<<"money next left:"<<Account::get_balance()+Account::get_credit()-Account::get_debit()-get_deal_price()<<endl;
    cout<<endl;
}
