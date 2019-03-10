#include <iostream>
using namespace std;
class Matrix
{
private:
      int ARRAY[2][2];
public:
      Matrix(int a[2][2]);
      Matrix operator+(Matrix b);
      Matrix operator-(Matrix b);
      Matrix operator*(Matrix b);

      void printArray();
};

 Matrix::Matrix(int a[2][2])
{
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<2;j++)
         {
             ARRAY[i][j]=a[i][j];
         }
     }
}

 Matrix Matrix::operator+(Matrix b)
{
       int array[2][2];
       for(int i=0;i<2;i++)
       {
            for(int j=0;j<2;j++)
            {
                array[i][j]=ARRAY[i][j]+b.ARRAY[i][j];
            }
       }
       return Matrix(array);
}

 Matrix Matrix::operator-(Matrix b)
{
       int array[2][2];
       for(int i=0;i<2;i++)
       {
            for(int j=0;j<2;j++)
            {
                 array[i][j]=ARRAY[i][j]-b.ARRAY[i][j];
            }
       }
       return Matrix(array);
}



 Matrix Matrix::operator*(Matrix b)
 {
        int array[2][2];
        int t;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
               array[i][j]=0;
               for(int k=0;k<2;t++)
               {
                   array[i][j]=array[i][j]+ARRAY[i][k]*b.ARRAY[k][j];
               }

            }
        }
        return Matrix(array);
 }


 void Matrix::printArray()
 {

     for(int i=0;i<2;i++)
     {
          for(int j=0;j<2;j++)
          {
              cout<<ARRAY[i][j]<<" ";
          }
          cout<<endl;
     }
}


   int main()
   {
        int array1[2][2]={{1,2},{3,4}};
        int array2[2][2]={{2,3},{4,5}};
        int array3[2][2];


       Matrix a1(array1),a2(array2),a3(array3);
       cout<<"a1 is: "<<endl;
       a1.printArray();

       cout<<"a2 is: "<<endl;
       a2.printArray();

       a3=a1+a2;
       cout<<"a3=a1+a2: "<<endl;
       a3.printArray();

       a3=a1-a2;
       cout<<"a3=a1-a2: "<<endl;
       a3.printArray();

       a3=a1*a2;
       cout<<"a3=a1*a2: "<<endl;
       a3.printArray();

   }
