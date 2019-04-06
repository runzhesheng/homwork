#include<iostream>
#include"savings_account.h"
using namespace std;

Savings_Account::Savings_Account(double balance,double r)
    :Account(balance)
{
    calculate_interest(r);
}

void Savings_Account::set_rate(double r)
{
    rate=r;
}
double Savings_Account::get_rate() const
{
    return rate;
}

double Savings_Account::calculate_interest(double r)
{
    double lixi=0;
    lixi=get_rate()*Account::get_balance();
    return lixi;
}
