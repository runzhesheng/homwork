#include<iostream>
using namespace std;
int main()
{
   int number=0;
   int counter = 0;
   int largest=0;
   int secondLargest=0;

   cout << "Enter a number: ";
   cin >> largest;

   cout << "Enter another number: ";
   cin >> number;


   if ( number > largest )
   {
      secondLargest = largest;
      largest = number;
   }
   else
      secondLargest = number;

   counter = 1;


   while ( counter < 9 )
   {
      cout << "Enter another number: ";
      cin >> number;


      if ( number > largest )
      {
         secondLargest = largest;
         largest = number;
      }
      else if ( number > secondLargest )
         secondLargest = number;

      counter++;
   }

   cout << "Largest is " <<  largest<<endl;
   cout<<"Second largest is " << secondLargest << endl;

   return 0;
}
