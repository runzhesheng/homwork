#ifndef BASE_PLUS_EMPLOYEE_H
#define BASE_PLUS_EMPLOYEE_H

#include<string>
#include"commission_employee.h"

class BasePlusEmployee :public Commission_Employee
{
public:
    BasePlusEmployee(const std::string &,const std::string &,const std::string &,int,int,int,
                     double=0.0,double=0.0,double=0.0);
    virtual ~Commission_Employee() {}

    void set_basesalary(double);
    double get_basesalary() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double basesalary;
};
#endif // BASE_PLUS_EMPLOYEE_H
