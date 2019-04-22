#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include<iostream>
#include"employee.h"


class Salaried_Employee : public Employee
{
public:
    Salaried_Employee(const std::string &,const std::string &,const std::string &,
                      int,int,int,double=0.0);
    virtual ~Salaried_Employee()  {}

    void set_weekly_salary(double);
    double get_weekly_salary() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double weekly_salary;
};
#endif // SALARIED_EMPLOYEE_H
