#include<iostream>
#include"overnightpackage.h"
using namespace std;


OvernightPackage::OvernightPackage(const std::string & p_n, const std::string &r_n, const std::string &p_l,const std::string &r_l,
                  int p_c,int r_c,int w,int p,int o_p)
    :Package(p_n,r_n,p_l,r_l,p_c,r_c,w,p)
{
    set_overnight_price(o_p);
}

void OvernightPackage::set_overnight_price(int o_p)
{
    overnight_price=o_p;
}
int OvernightPackage::get_overnight_price() const
{
    return overnight_price;
}

//将额外的每盎司费用加到标准的每盎司费用上
double OvernightPackage::calculate___cost()
{
    return (Package::get_price()+get_overnight_price())*Package::get_weight();
}

void OvernightPackage::print() const
{
    cout<<"post 3:"<<endl;
    Package::print();  //调用基类的print函数
    cout<<"over night price of each kilo: "<<get_overnight_price();
    cout<<"price of all: "<<calculate___cost()<<endl;
    cout<<endl;
}
