#include<iostream>
using namespace std;

//将第二个字符串连接到第一个字符串后面
void mystery1(char*,const char*);

int main()
{
    char string1[80];
    char string2[80];

    cout<<"Enter string1: ";
    cin>>string1;
    cout<<endl;
    cout<<"Enter string2: ";
    cin>>string2;

    mystery1(string1,string2);
    cout<<string1<<endl;
}
void mystery1(char *s1, const char *s2)
{
    while(*s1!='\0')
        ++s1;
    while(*s1=*s2)
    {
        ++s1;
        ++s2;
    }
}
