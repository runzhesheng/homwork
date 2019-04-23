#include<iostream>
#include"savings_account.h"
using namespace std;

Savings_Account::Savings_Account(double balance,double input,double output,double r)
    :Account(balance,input,output)
{
    set_rate(r);
}

void Savings_Account::set_rate(double r)
{
    rate=r;
}
double Savings_Account::get_rate() const
{
    return rate;
}

double Savings_Account::calculate_interest()
{
    double lixi=0;
    lixi=get_rate()*(Account::get_balance()+Account::get_credit()-Account::get_debit());
    return lixi;
}

void Account::print() const
{
    cout<<"lixi: "<<calculate_interest()<<endl;
    Account::print();
    cout<<"money next left:"<<Account::get_balance()+Account::get_credit()-Account::get_debit()+calculate_interest()<<endl;
    cout<<endl;
}
