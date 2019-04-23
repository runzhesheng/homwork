#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
class Account
{
public:
    Account(double balance,double input,double output);

    void set_balance(double balance);
    double get_balance() const;

    void set_credit(double input);
    double get_credit() const;

    void set_debit(double output);
    double get_debit() const;
    
    virtual void print() const;

private:
    double Balance;  //余额
    double credit_input;
    double debit_output;
};

#endif // ACCOUNT_H
