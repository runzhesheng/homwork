#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include<iostream>
#include"package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const std::string & p_n, const std::string &r_n, const std::string &p_l,const std::string &r_l,
                  int p_c,int r_c,int w,int p,int t_s_p);

    double calculate__cost();
    void set_two_price(int t_s_p);
    int get_two_price() const;

private:
    int twoday_service_price;        //两日快递平寄的服务费

};
#endif // TWODAYPACKAGE_H
