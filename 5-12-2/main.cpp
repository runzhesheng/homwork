#include<iostream>
using namespace std;
int main()

{
    int i=0;
    int j=0;
    for(i=1;i<=10;i++)  // 图a
    {
          j=1;
          while(j<=i)
          {
            cout<<"*";
            j=j+1;        // j 必须每次重新赋值为1
          }
          cout<<endl;

    }
    cout<<endl;


    for(i=10;i>=0;i--)  // 图b
    {
          j=1;            // j 必须每次重新赋值为1
          while(j<=i)
          {
            cout<<"*";
            j=j+1;
          }
          cout<<endl;

    }

    for(i=1;i<=11;i++)  // 图c
    {
          j=1;
          while(j<=i)
          {
            cout<<" ";
            j=j+1;        // j 必须每次重新赋值为1
          }

          int k=11;       // k必须每次重新赋值为11
          while(k>=i)
         {
            cout<<"*";
            k=k-1;
         }

          cout<<endl;
    }

    for ( i = 10; i >= 1; i-- )  // 图 d
    {
       for ( j = 1; j < i; j++ )
          cout << " ";

       for ( int k = 10; k >= i; k-- )
          cout << "*";

       cout << endl;
    } // end for

    return 0;

}
