#include<iostream>
using namespace std;
int main()
{
    unsigned int passes=0;
    unsigned int failures=0;
    unsigned int studentcounter=0;

    while(studentcounter<10)
    {
        cout<<"Enter result (1=passes, 2=failure): ";
        int result;
        cin>>result;

        if     (result==1)      passes=passes+1;
        else if(result==2)      failures=failures+1;
             else     {  cout<<"Incorrect number entered,input again"<<endl;
                         studentcounter=studentcounter;  //进入下一次循环时候计数器的值不变
                         continue;                //循环语句中，conntinue跳过剩下的语句进入下一次循环
                      }

        studentcounter=studentcounter+1;
    }

    cout<<"Passed: "<<passes<<endl;
    cout<<"Failure: "<<failures<<endl;
    if(passes>8)
        cout<<"Bonus to instructor!"<<endl;
}
