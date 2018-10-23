#include <iostream>

using namespace std;

int main()
{
     float base_wage=200;
     float salary=0;
     float sale_dollars=0;
     while(sale_dollars!=-1)
     {
     base_wage=200;
     salary=0;
     sale_dollars=0;
     cout<<"Enter sales in dollars(or -1 to quit) : ";
     cin>>sale_dollars;
     if (sale_dollars==-1) break;
     salary=sale_dollars*0.09+base_wage;
     cout<<"Salary is: "<<salary<<endl;
     }

    return 0;
}

