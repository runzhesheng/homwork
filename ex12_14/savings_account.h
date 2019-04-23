#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include<iostream>
#include"account.h"
class Savings_Account : public Account
{
public:
    Savings_Account(double balance,double input,double output,double r);

    double calculate_interest();     //利息=利率*余额

    void set_rate(double r);
    double get_rate() const;
    
    virtual void print() const override;
    
private:
    double rate;    // 利率
};
#endif // SAVINGS_ACCOUNT_H
