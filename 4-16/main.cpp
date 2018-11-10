#include<iostream>
using namespace std;
int main ()
{   int i=0;
    while(i<1000)
    {
    int work_hour=0;
    int salary_hourly=0;
    int salary=0;

    cout<<"Enter hours worked: ";
    cin>>work_hour;

    if(work_hour==-1) break;     //输入-1 跳出循环

    cout<<"Enter hourly rate of the employee : ";
    cin>>salary_hourly;

    if(work_hour<=40)
        salary=salary_hourly*work_hour;
    else   //
    {
        salary=salary_hourly*work_hour+(work_hour-40)*salary_hourly/2;
    }
    cout<<"Salary is : "<<salary<<endl;
    i++;
    }
    return 0;
}
