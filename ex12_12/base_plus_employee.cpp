#include<iostream>
#include"base_plus_employee.h"
#include<stdexcept>
using namespace std;

BasePlusEmployee::BasePlusEmployee(
        const string &first,const string &last,const string &sn,int month, int day, int year,
        double sale,double rate,double salary)
    :Commission_Employee(first,last,sn, month, day, year,sale,rate)
{
      set_basesalary(salary);
}

void BasePlusEmployee::set_basesalary(double salalry)
{
    if(salary>=0.0) basesalary=salary;
    else throw invalid_argument("salary must be >0");
}

double BasePlusEmployee::get_basesalary() const
{
    return basesalary;
}

double BasePlusEmployee::earnings() const
{
    return get_basesalary()+Commission_Employee::earnings();
}

void BasePlusEmployee::print() const
{
    cout<<"base_salaried：";
    Commission_Employee::print()<<endl;
    cout<<"base salary:"<<get_basesalary();
}
