#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
class Account
{
public:
    Account(double balance);

    void set_balance(double balance);
    double get_balance() const;

    double credit(double input);
    double debit(double output);


private:
    double Balance;  //余额
};

#endif // ACCOUNT_H
