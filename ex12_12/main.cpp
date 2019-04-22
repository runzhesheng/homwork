#include<iostream>
#include<iomanip>
#include<vector>

#include"employee.h"
#include"salaried_employee.h"
#include"commission_employee.h"
#include"base_plus_employee.h"
#include"date.h"
using namespace std;

void virtiual_pointer(const Employee* );
void virtiual_reference(const Employee&);

int month=12;

int main()
{
    //const int month=12;

    cout<<fixed<<setprecision(2);
    Salaried_Employee salaried_employee("lee","yurun","1456789", 12,6,1998 ,  800);
    Commission_Employee commission_employee("run","zhesheng","123456", 1,12,1987 ,10000,0.6);
    BasePlusEmployee baseplusemployee("jing","shangming","456789", 8,6,1992, 5000,0.1,800);

    cout<<"using static bonding:"<<endl;

    salaried_employee.print()<<endl;
    cout<<"earned $ "<<salaried_employee.earnings()<<endl;

    commission_employee.print();<<endl;
    cout<<"earned $ "<<commission_employee.earnings()<<endl;

    baseplusemployee.print()<<endl;
    cout<<"earned $ "<<baseplusemployee.earnings()<<endl;
    cout<<endl;

    vector<Employee*> employees(3);

    employees[0]=&salaried_employee;
    employees[1]=&commission_employee;
    employees[2]=&baseplusemployee;


    cout<<"using dymatic dinding:"<<endl<<endl;

    cout<<"Virtual function calls pointer:"<<endl;

    for(const Employee*baseclassPrt:employees)
        virtiual_pointer(baseclassPrt);


    cout<<"Virtual function calls reference:"<<endl<<endl;

    for(const Employee*baseclassRef:employees)
        virtiual_reference(*baseclassRef);

    return 0;
}

void virtiual_reference(const Employee &baseclassRef)
{
    Date birthday = baseclassRef.getBirthDate();
    baseclassRef.print();
    cout<<endl;

    if ( birthday.getMonth() == month )
       cout << "HAPPY BIRTHDAY!\nearned $"
          << ( baseclassRef.earnings() + 100.0 ) << endl;
    else
       cout << "earned $" << baseclassRef.earnings() << endl;

    cout<<endl<<endl;
}
void virtiual_pointer(const Employee *baseclassPtr)
{
    Date birthday = baseclassPtr->getBirthDate();
    baseclassPtr->print();
    cout<<endl;

    if ( birthday.getMonth() == month)
       cout << "HAPPY BIRTHDAY!\nearned $"
          << ( baseclassPtr->earnings() + 100.0 ) << endl;
    else
       cout << "earned $" << baseclassPtr->earnings() << endl;

    cout<<endl<<endl;
}


