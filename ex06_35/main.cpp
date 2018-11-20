#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i;
    int number;
    int counter=0;     //猜想次数计数器
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
          counter=counter+1;
      }

   }
    if(counter<10)
        cout<<"Either you kown the secret or you are lucky!"<<endl;
    else if(counter==10)
        cout<<"Ahah!You kown the secret"<<endl;
    else
        cout<<"You should able to do better"<<endl;
    return 0;
}
