#include<iostream>
#include<array>
#include<string>
using namespace std;
int main()
{
     array<string,9>a;
     for(size_t i=0;i<=3;i++)
     {
         a[i]=" ";
     }
     a[4]="*";
     for(size_t i=5;i<=8;i++)
     a[i]=" ";

     array<string,9>b;
     for(size_t i=0;i<=2;i++)
     b[i]=" ";
     for(size_t i=3;i<=5;i++)
     b[i]="*";
     for(size_t i=6;i<=8;i++)
     b[i]=" ";

     array<string,9>c;
     for(size_t i=0;i<=1;i++)
     c[i]=" ";
     for(size_t i=2;i<=6;i++)
     c[i]="*";
     for(size_t i=7;i<9;i++)
     c[i]=" ";

     array<string,9>d;
     for(size_t i=0;i<1;i++)
     d[i]=" ";
     for(size_t i=1;i<=7;i++)
     d[i]="*";
     for(size_t i=8;i<9;i++)

     array<string,9> j;
     for(size_t i=0;i<9;i++)
     j[i]="*";

     array<string,9>f;
     for(size_t i=0;i<1;i++)
     f[i]=" ";
     for(size_t i=1;i<7;i++)
     f[i]="*";
     for(size_t i=8;i<9;i++)
     f[i]=" ";

     array<string,9>g;
     for(size_t i=0;i<=1;i++)
     g[i]=" ";
     for(size_t i=2;i<=6;i++)
     g[i]="*";
     for(size_t i=7;i<9;i++)
     g[i]=" ";

     array<string,9>h;
     for(size_t i=0;i<=2;i++)
     h[i]=" ";
     for(size_t i=2;i<=5;i++)
     h[i]="*";
     for(size_t i=6;i<9;i++)
     h[i]=" ";

     array<string,9>s;
     for(size_t i=0;i<=3;i++)
     s[i]=" ";
     s[4]="*";
     for(size_t i=5;i<9;i++)
     s[i]=" ";

     for(size_t i=0;i<a.size();i++)
         cout<<a[i];
     cout<<endl;
     for(size_t i=0;i<b.size();i++)
         cout<<b[i];
     cout<<endl;
     for(size_t i=0;i<c.size();i++)
         cout<<c[i];
     cout<<endl;
     for(size_t i=0;i<d.size();i++)
         cout<<d[i];
     cout<<endl;
     for(size_t i=0;i<j.size();i++)
         cout<<j[i];
     cout<<endl;
     for(size_t i=0;i<f.size();i++)
         cout<<f[i];
     cout<<endl;
     for(size_t i=0;i<g.size();i++)
         cout<<g[i];
     cout<<endl;
     for(size_t i=0;i<h.size();i++)
         cout<<h[i];
     cout<<endl;
     for(size_t i=0;i<s.size();i++)
         cout<<s[i];
     cout<<endl;

     return 0;
}
