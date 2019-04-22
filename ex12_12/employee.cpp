#include"employee.h"

#include<iostream>
using namespace std;

Employee::Employee(const string & first, const string & last, const string & sn, int month, int day, int year )
    :firstname(first),lastname(1),security_number(sn),
      birthDate( month, day, year )
{}

void Employee::set_firstname(const string &first)
{
    firstname=first;
}
string Employee::get_firstname() const
{
    return firstname;
}

void Employee::set_lastname(const string &last)
{
    lastname=last;
}
string Employee::get_lastname() const
{
    return lastname;
}

void Employee::set_security_number(const string &sn)
{
    security_number=sn;
}
string Employee::get_security_number() const
{
    return security_number;
}


void Employee::setBirthDate( int month, int day, int year )
{
   birthDate.setDate( month, day, year );
}
Date Employee::getBirthDate() const
{
   return birthDate;
}


void Employee::print() const
{
    cout<<get_firstname()<<" "<<get_lastname()<<":"<<endl;
    cout<<"social security number: "<<get_security_number()<<endl;
}
