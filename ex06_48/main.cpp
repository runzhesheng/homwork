#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

unsigned int roll_dice();

int main()
{
    enum Status{CONTINUE,WON,LOST};

    srand(static_cast<unsigned int>(time(0)));

    unsigned int my_point=0;
    Status game_status=CONTINUE;
    unsigned int sum_of_dice=roll_dice();

    int bank_balance=1000;
    int wager;
    cout<<"Enter wager:";
    cin<<wager;
    while(wager>bank_balance)
    {
        cout<<"Incorrect wager entered,try again: ";
        cin>>wager;
    }
    while()
    switch(sum_of_dice)
    {
        case 7:
        case 11:
           game_status=WON;
           break;
        case 2:
        case 3:
        case 12:
           game_status=CONTINUE;
           my_point=sum_of_dice;
           cout<<"Point is "<<my_point<<endl;
           break;
    }

    while(CONTINUE==game_status)
    {
        sum_of_dice=roll_dice();
        if(sum_of_dice==my_point)  game_status=WON;
        else if(sum_of_dice==7)    game_status=LOST;
    }

    if(WON==game_status)
    {
        cout<<"Player win"<<endl;
        bank_balance=bank_balance+wager;
        cout<<"new bankBalance: "<<bank_balance;
    }
    else
    {
        cout<<"Player lost"<<endl;
        bank_balance=bank_balance-wager;
        if(bank_balance==0)
            cout<<"Sorry,You busted!"<<endl;
        else
            cout<<"New bankBalance: "<<bank_balance;
    }
}

unsigned int roll_dice()
{
    unsigned int die1 = 1+rand()%6;
    unsigned int die2 = 1+rand()%6;
    unsigned int sum=die1+die2;

    cout<<"Player rolled: "<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}
