#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include<iostream>
#include"package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(const std::string & p_n, const std::string &r_n, const std::string &p_l,const std::string &r_l,
                  int p_c,int r_c,int w,int p,int o_p);

    double calculate___cost();
    void set_overnight_price(int o_p);
    int get_overnight_price() const;

private:
    int overnight_price;        //隔夜快递服务费，每盎司的额外费用


};

#endif // OVERNIGHTPACKAGE_H
