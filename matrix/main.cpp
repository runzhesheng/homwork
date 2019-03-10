# include<iostream>
using namespace std;
class Matrix
{
private:

      int iii;
      int jjj;
public:
      Matrix(int A[iii][jjj]);
      Matrix operator+(Matrix b);
      Matrix operator-(Matrix b);
      Matrix operator*(Matrix b);
      void printArray();
};



Matrix::Matrix(int A[iii][jjj])
{
    if((iii=2)&&(jjj=3))
   {
        for(int i=0;i<2;i++)
       {
           for(int j=0;j<3;j++)
          {
              Array[i][j]=A[i][j];
          }
       }
   }

    if((iii=3)&&(jjj=2))
   {
        for(int i=0;i<3;i++)
       {
           for(int j=0;j<2;j++)
          {
              Array[i][j]=A[i][j];
          }
       }
   }

    if((iii=2)&&(jjj=2))
   {
        for(int i=0;i<2;i++)
       {
           for(int j=0;j<2;j++)
          {
              Array[i][j]=A[i][j];
          }
       }
   }
}

Matrix Matrix::operator+(Matrix b)
{
    int ARRAY[2][3];
    for(int i=0;i<2;i++)
   {
       for(int j=0;j<3;j++)
      {
          Array[i][j]=A[i][j];
      }
   }

   ARRAY[i][j]=ARRAY[i][j]+b.arr[i][j];
   return Matrix(ARRAY);
}

Matrix Matrix::operator-(Matrix b)
   {
   int ARRAY[2][3];
   for(int i=0;i<2;i++)
   for(int j=0;j<3;j++)
   ARRAY[i][j]=arr[i][j]-b.arr[i][j];
   return Matrix(ARRAY);
   }


Matrix Matrix::operator*(Matrix b)
 {
        int ARRAY[2][3];
        int t;
        for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
               {
                   ARRAY[i][j]=0;
                   for(t=0;t<2;t++)
                   ARRAY[i][j]=ARRAY[i][j]+arr[i][t]*b.arr[t][j];
               }

        return Matrix(ARRAY);
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
//      int A1[2][3]={{1,2,3},{4,5,6}};
//      int A2[2][3]={{4,5,6},{7,8,9}};
//      int A3[2][3]={0,0,0,0,0,0};

//      int A4[2][3]={{1,2,3},{4,5,6}};
//      int A5[3][2]={{4,5},{5,6},{7,8}};
//      int A6[2][2]={0,0,0,0,0,0};

//       Matrix array1(A1,2,3);
//       Matrix array2(A2,2,3);
//       Matrix array3(A3,2,3);
//       Matrix array4(A4,2,3);
//       Matrix array5(A5,3,2);
//       Matrix array6(A6,2,2);

        Matrix array1[2][3]={{1,2,3},{4,5,6}};
        Matrix array2[2][3]={{4,5,6},{7,8,9}};
        Matrix array3[2][3]={0,0,0,0,0,0};

        Matrix array4[2][3]={{1,2,3},{4,5,6}};
        Matrix array5[3][2]={{4,5},{5,6},{7,8}};
        Matrix array6[2][2]={0,0,0,0,0,0};

       cout<<"array1 is :"<<endl;
       array1.printArray();

       cout<<"array2 is :"<<endl;
       array2.printArray();

       array3=array1+array2;
       cout<<"array3=array1+array2: "<<array3.printArray()<<endl;

       array3=array1-array2;
       cout<<"array3=array1-array2: "<<array3.printArray()<<endl;

       array6=array4*array5;
       cout<<"array6=array4*array5: "<<array6.printArray();<<endl;




   }
