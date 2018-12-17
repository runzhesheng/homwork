#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int employee_1[5];
   int employee_2[5];
   int employee_3[5];
   int employee_4[5];

    for(int i=0;i<30;i++)
    {

        cout<<"this is the "<<i+1<<"th day"<<endl;

        int product_1[5];
        cout<<"enter amount from product_1 to product_5 employee1 has sold:"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"product_"<<j+1<<" by employee1: ";
            cin>>product_1[j];

            employee_1[j]=employee_1[j]+product_1[j];


        }

        int product_2[5];
        cout<<"enter amount from product_1 to product_5 employee2 has sold:"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"product_"<<j+1<<" by employee2: ";
            cin>>product_2[j];
            employee_2[j]=employee_2[j]+product_2[j];
        }

        int product_3[5];
        cout<<"enter amount from product_1 to product_5 employee3 has sold:"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"product_"<<j+1<<" by employee3: ";
            cin>>product_3[j];
            employee_3[j]=employee_3[j]+product_3[j];
        }

        int product_4[5];
        cout<<"enter amount from product_1 to product_5 employee4 has sold:"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"product_"<<j+1<<" by employee4: ";
            cin>>product_4[j];
            employee_4[j]=employee_4[j]+product_4[j];
        }


    }

    int A[5];
    for(int i=0;i<5;i++)
    {
        A[i]=employee_1[i]+employee_1[i]+employee_1[i]+employee_1[i]+employee_1[i];
        cout<<setw(10)<<"employee_1     "<<"employee_2     "<<"employee_3     "<<"employee_4     "<<"sum"<<endl;
        cout<<"product_"<<i+1<<" "<<employee_1[i]<<setw(5)<<employee_2[i]<<setw(5)<<employee_3[i]<<setw(5)<<employee_4[i]
           <<setw(5)<<A[i];
    }
    cout<<"sum       "<<employee_1[0]+employee_1[1]+employee_1[2]+employee_1[3]+employee_1[4]<<setw(5)
                      <<employee_2[0]+employee_2[1]+employee_2[2]+employee_2[3]+employee_2[4]<<setw(5)
                      <<employee_3[0]+employee_3[1]+employee_3[2]+employee_4[3]+employee_3[4]<<setw(5)
                      <<employee_4[0]+employee_4[1]+employee_4[2]+employee_4[3]+employee_4[4]<<setw(5)
                      <<A[0]+A[1]+A[2]+A[3]+A[4]+A[5]<<endl;


    return 0;
}
