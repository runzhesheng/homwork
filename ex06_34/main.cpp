#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i;
    int number;
    while(i!=number)
   {
      //i==1+rand()%1000;
      i=78;
      number=0;

      cout<<"Enter a integer you have guessed from 1 to 1000: ";
      cin>>number;

      if(i==number)
      {
          cout<<"\nExcellent! You guessed the number!"<<endl;
          cout<<"\nWould you like to play again?(-1 to quit,1 to continue):";
          int A;
          cin>>A;
          if(A==-1)  break;
          else
              {
              cout<<"Let's begain a new turn"<<endl;
              continue;
              }
      }
      else
      {
          if(i<number)
              cout<<"Too high,try again: "<<endl;
          if(i>number)
              cout<<"Too low,try again: "<<endl;
      }

   }
    return 0;
}
