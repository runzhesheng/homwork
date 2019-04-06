#include<iostream>
#include"checking_account.h"
using namespace std;

Checking_Account::Checking_Account(double balance, double d_p)
    :Account(balance)
{
    set_deal_price(d_p);
}

void Checking_Account::set_deal_price(double d_p)
{
    deal_price=d_p;
}

bool Checking_Account::set_debit(double output)
{
    if(output<=Account::get_balance())  output=1;
    else output=0;
    return output;

}

double Checking_Account::get_deal_price() const
{
 //   if(set_debit()==0)  cout<<"output over balance ";
    return deal_price;
}

double Checking_Account::set_credit(double input)
{
    return input;
}

