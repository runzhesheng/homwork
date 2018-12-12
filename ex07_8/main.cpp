#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include<cstdlib>

using namespace std;


float max(float x,float y)
{
    return x>y? x:y;
}
float min(float x,float y)
{
    return x<y? x:y;
}

int main()
{
       //a
       array<string ,8>alphabet;
//       for( size_t i=0 ; i<alphabet.size() ; i++)
//           cin>>alphabet[i];

       for( size_t j=0 ;j<alphabet.size() ; j++)
       {
           cout<<"the elements of char you have ented is : ";
           cout<<alphabet[j]<<endl;
       }
       cout<<"the sixth element of the alphabet is: "<<alphabet[6];

       cout<<endl;
       //b
       float a;
       array<float ,5>grades;
       cout<<"enter an number of float for elements of grades at fourth: ";
       cin>>a;
       grades[4]=a;
       cout<<"grades[4]="<<grades[4]<<endl;

       cout<<endl;
       //c
       array <int,5> value;
       for( size_t m=0 ; m<value.size() ; m++)
        value[m]=8;
       cout<<"element"<<setw(5)<<"value"<<endl;
       for( size_t n=0 ; n<value.size() ; n++)
       cout<<n<<setw(11)<<value[n]<<endl;

       cout<<endl;
       //d
       array <float,100> temperatures;
       float sum_temperatures=0;
       for( size_t q=0 ; q<temperatures.size() ; q++)
       {
           temperatures[q]=q;
           sum_temperatures=sum_temperatures+temperatures[q];
       }
       cout<<"sum of degrees form temperatures 1 to 100 are: ";
       cout<<sum_temperatures;

       cout<<endl;
       //e
       array< double , 11>ab;
       array< double , 34>b;
       double h=0;
       for( size_t f=0 ; f<ab.size() ; f++)
       {
           b[f]=h;
           cout<<"elements of b form the first to the last:"<<endl;
           cout<<b[f]<<endl;
           h++;
       }

       double s=0;
       for(size_t d=0 ; d<ab.size() ; d++)
       {

           ab[d]=s;
           cout<<"elements of b form the first to the last:"<<endl;
           cout<<ab[d]<<endl;
           s++;
       }

       for( size_t u=1 ; u<ab.size() ; u++)
       {
           b[u]=b[u]+ab[u];
           cout<<"elements of new b form the first to the last:"<<endl;
           cout<<b[u]<<endl;
       }

       cout<<endl;
       //f
       array<float ,99> w;
       float A=0;
       float B=0;
       for(size_t l=0;l<w.size();l++)
       {
           w[l]=1+rand()%100;
       }
       for(size_t x=0;x<w.size();x++)
       {
        A=max(A,w[x]);
        B=min(B,w[x]);
       }
       for(size_t i=0; i<w.size();i++)
       {
           if(A=w[i])
           {
               cout<<"the biggest element of w is: "<<A<<endl;
               cout<<"it is order in w is: "<<i<<endl;
           }
       }
       for(size_t i=0; i<w.size();i++)
       {
           if(B=w[i])
           {
               cout<<"the smallest element of w is: "<<A<<endl;
               cout<<"it is order in w is: "<<i<<endl;
           }

       }


       return 0;
}
