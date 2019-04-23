#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include<iostream>
#include"account.h"
class Checking_Account : public Account
{
public:
    Checking_Account(double balance,double input,double output,double d_p);

    void set_deal_price(double d_p);
    double get_deal_price() const;


 
    virtual void print() const override;
private:
    double deal_price;
};
#endif // CHECKING_ACCOUNT_H
