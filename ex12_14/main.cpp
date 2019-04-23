#include<iostream>
#include<vector>
#include"account.h"
#include"checking_account.h"
#include"savings_account.h"

using namespace std;

void virtual_pointer( Account* ) ;

int main()
{
    double output_money=0;
    double input_money=0;
    cout<<"the rest money of your account is 5000"<<endl;
    cout<<"please enter the money you wangt to output: ";
    cin>>output_money;
    cout<<endl;
    
    cout<<"Please enter the money you want to input: ";
    cin>>input_money;

    Checking_Account check(5000,input_money,output_money,10);
    Savings_Account save(5000,input_money,output_money,0.1);

    vector<Account*> account(2);
    account[0]=&check;
    account[1]=&save;
    account[0]->print();
    account[1]->print();

//    for( Account *accountPtr:account)
//         virtual_pointer(account);


    return 0;
}
//void virtual_pointer( Account *  accountPtr )
//{
//    accountPtr->print();
//}
