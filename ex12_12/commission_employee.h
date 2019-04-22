#ifndef COMMISSION_EMPLOYEE_H
#define COMMISSION_EMPLOYEE_H
#include<iostream>
#include"employee.h"
#include<string>

class Commission_Employee:public Employee
{
public:
    Commission_Employee(const std::string &,const std::string &,const std::string &,int,int,int,
                        double=0.0,double=0.0);
    virtual ~Commission_Employee() {}

    void set_CommissionRate(double);
    double get_CommissionRate() const;

    void set_GrossSale(double);
    double get_GrossSale() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double CommissionRate;
    double GrossSale;
};
#endif // COMMISSION_EMPLOYEE_H
