#include<iostream>
#include"account.h"
using namespace std;

Account::Account(double balance)
{
    set_balance(balance>=0? balance : 0);
}

void Account::set_balance(double balance)
{
    Balance=balance;
}
double Account::get_balance() const
{
    return Balance;
}

double Account::credit(double input)
{
   return input;
}

double Account::debit(double output)
{
    while(output>get_balance())
   {
        cout<<"debit amount exceeded account balance,enter again:";
        cin>>output;
   }
    return output;
}



