#include<iostream>
#include"account.h"
using namespace std;

Account::Account(double balance, double input, double output)
{
    set_balance(balance>=0? balance : 0);
    set_credit(input);
    set_debit(output);

}

void Account::set_balance(double balance)
{
    Balance=balance;
}
double Account::get_balance() const
{
    return Balance;
}

void Account::set_credit(double in)
{
    credit_input=in;

}
double Account::get_credit() const
{
   return credit_input;
}

void Account::set_debit(double out)
{
    while(out>get_balance())
   {
        cout<<"debit amount exceeded account balance,enter again:";
        cin>>out;
   }
   debit_output=out;
}
double Account::get_debit() const
{
    return debit_output;
}

void Account::print() const
{
    cout<<"money first left: "<<get_balance()+get_credit()-get_debit()<<endl;

}

