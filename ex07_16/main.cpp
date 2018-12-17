#include<iostream>
#include<array>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
      int sum[11];
      int face_up[36000];
      int face_down[36000];

      for(int i=0;i<36000;i++)
      {
          face_up[i]=1+rand()%6;
      }
      for(int i=0;i<36000;i++)
      {
          face_down[i]=1+rand()%6;
      }

      for(int i=0;i<36000;i++)
      {
          for(int j=0;j<11;j++)
          {
              if(face_down[i]+face_up[i]==2+j)  sum[j]=sum[j]+1;
          }
//          if(face_down[i]+face_up[i]==2)  sum[0]=sum[0]+1;
//          if(face_down[i]+face_up[i]==3)  sum[1]=sum[1]+1;
//          if(face_down[i]+face_up[i]==4)  sum[2]=sum[2]+1;
//          if(face_down[i]+face_up[i]==5)  sum[3]=sum[3]+1;
//          if(face_down[i]+face_up[i]==6)  sum[4]=sum[4]+1;
//          if(face_down[i]+face_up[i]==7)  sum[5]=sum[5]+1;
//          if(face_down[i]+face_up[i]==8)  sum[6]=sum[6]+1;
//          if(face_down[i]+face_up[i]==9)  sum[7]=sum[7]+1;
//          if(face_down[i]+face_up[i]==10) sum[8]=sum[8]+1;
//          if(face_down[i]+face_up[i]==11) sum[9]=sum[9]+1;
//          if(face_down[i]+face_up[i]==12) sum[10]=sum[10]+1;
      }

      for(int i=0;i<11;i++)
      {
          cout<<"sum="<<(2+i)<<setw(5)<<sum[i]<<endl;
      }
      return 0;

}
