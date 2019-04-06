#include<iostream>
#include"twodaypackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const std::string & p_n, const std::string &r_n, const std::string &p_l,const std::string &r_l,
              int p_c,int r_c,int w,int p,int t_s_p)
    :Package(p_n,r_n,p_l,r_l,p_c,r_c,w,p)    //显示的调用积基类的构造函数，使用成员初始化器，将参数传递给类的构造函数
{
    set_two_price(t_s_p);
}

void TwoDayPackage::set_two_price(int t_s_p)
{
    twoday_service_price=t_s_p;
}
int TwoDayPackage::get_two_price() const
{
    return twoday_service_price;
}

double TwoDayPackage::calculate__cost()
{
    return Package::calculate_cost()+get_two_price();   // 两日的邮递服务费用 加上 package里的基于重量的费用
}
