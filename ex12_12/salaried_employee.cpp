#include<iostream>
#include"salaried_employee.h"
using namespace std;

Salaried_Employee::Salaried_Employee(const string & first,
                const string & last, const string & sn,int month, int day, int year, double salary)
    :Employee(first,last,sn ,month, day, year)
{
    set_weekly_salary(salary);
}

void Salaried_Employee::set_weekly_salary(double salary)
{
    weekly_salary=salary;
}
double Salaried_Employee::get_weekly_salary() const
{
    return weekly_salary;
}

double Salaried_Employee::earnings() const
{
    return get_weekly_salary();
}
void Salaried_Employee::print() const
{
    cout<<"Salaried employee: ";
    Employee::print();
    cout<<"weekly_salary: "<<get_weekly_salary()<<endl;
}
