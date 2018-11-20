//#include <iostream>
//using namespace std;

//int main()
//{
//   // static local variable count, initialized to 1
//   static int count = 1;

//   cout << count++ << endl; // postincrement and print value of count
//   main(); // call main recursively
//} // end main

#include<iostream>
using namespace std;
int main()
{
    int c=0;
    if( (c=cin.get() )!=EOF )
    {
        mian();      //error: 'mian' was not declared in this scope
        cout<<c;     // main() 函数在一个程序中不应当被其他函数调用或者递归调用
                     // 它的唯一的作用就是作为程序到的起点
    }
}
