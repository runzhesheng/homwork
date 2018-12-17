#include<iostream>

using namespace std;
//返回字符串的长度
int mystery2(const char*);
int main()
{
    char string1 [80];
    cout<<"Enter a string: ";
    cin>>string1;
    cout<<mystery2(string1)<<endl;
}

int mystery2( const char*s)
{
    unsigned int x;
    for(x=0;*s!='\0';++s)
        ++x;
    return x;
}
