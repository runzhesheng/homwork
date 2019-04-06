#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include<iostream>
#include"account.h"

class Checking_Account : public Account
{
public:
    Checking_Account(double balance,double d_p);

    void set_deal_price(double d_p);
    double get_deal_price() const;

    double set_credit(double input);
    bool set_debit(double output);

private:
    double deal_price;
};
#endif // CHECKING_ACCOUNT_H
