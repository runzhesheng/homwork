#include<iostream>
#include"commission_employee.h"
using namespace std;

Commission_Employee::Commission_Employee(const string & first, const string & last,int month, int day, int year,
                                         const string & sn,double sale, double rate)
    :Employee(first,last,sn, month, day, year)
{
    set_GrossSale(sale);
    set_CommissionRate(rate);
}

void Commission_Employee::set_CommissionRate(double rate)
{
    CommissionRate=rate;
}
double Commission_Employee::get_CommissionRate() const
{
    return CommissionRate;
}

void Commission_Employee::set_GrossSale(double)
{
    GrossSale=sale;
}
double Commission_Employee::get_GrossSale() const
{
    return GrossSale;
}

double Commission_Employee::earnings() const
{
    return get_CommissionRate()*get_GrossSale();
}
void Commission_Employee::print() const
{
    cout<<"commission employee: ";
    Employee::print();
    cout<<"grossSale: "<<get_GrossSale()<<endl;
    cout<<"Commission rate: "<<get_CommissionRate()<<endl;
}
