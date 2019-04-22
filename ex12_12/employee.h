#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include "date.h"
class Employee
{
public:
    Employee(const std::string &,const std::string &,const std::string &,
             int,int,int);

    virtual ~Employee() {}

    void set_firstname(const std::string &);
    std::string get_firstname() const;

    void set_lastname(const std::string &);
    std::string get_lastname() const;

    void set_security_number(const std::string &);
    std::string get_security_number() const;

    void setBirthDate( int, int, int );
    Date getBirthDate() const;

    virtual double earnings() const=0; //纯virtual函数 派生类必须提供实现
    virtual void print() const;

private:
    std::string firstname;
    std::string lastname;
    std::string security_number;
    Date birthDate;


};

#endif // EMPLOYEE_H
