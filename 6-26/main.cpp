#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int celsius(int F);                          // 进行转换返回摄氏温度
    int fahrenheit(int C);                       // 进行温度转换返回华氏温度

    int i=1;
    cout<<"Degree fahrenheit form 1 to 100: "<<endl;
    while(i<=100)
    {
        cout<<"  "<<fahrenheit(i);
        if(i%5==0) cout<<endl;

        i++;
    }
//    for ( int i = 0; i < 25; i++ )
//    {
//       for ( int j = 0; j <= 75; j += 25 )
//          cout <<setw(7)<< i+j <<setw( 11 ) << fahrenheit( i + j ) << ' ';

//       cout << endl;
//    }


    int k=32;
    cout<<"Degree celsius form 32 to 212: "<<endl;

    for ( int i = 32; i < 77; i++ )
    {
        for ( int j = 0; j <= 135; j += 45 )
          cout << setw( 10 ) << i + j<< setw( 8 ) << celsius( i + j ) << ' ';

      cout << endl;
    }
//    while(k<=212)
//    {
//        int counter=1;
//        cout<<"  "<<celsius(k);
//        if(counter%5==0) cout<<endl;

//        k++;
//        counter++;
//    }
   return 0;
}

int celsius(int F)                                    //华氏转摄氏
{
    return static_cast< int >(5/9 * (F-32));
}

int fahrenheit(int C)                                 //摄氏转华氏
{
    return static_cast< int >(9/5 * C+32);
}

//#include <iostream>
//#include <iomanip>
//using namespace std;

//int celsius( int ); // function prototype
//int fahrenheit( int ); // function prototype

//int main()
//{
//   // display table of Fahrenheit equivalents of Celsius temperatures
//   cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;

//   // create 4 sets of table headers
//   for ( int t = 0; t < 4; t++ )
//      cout << setw( 7 ) << "Celsius" << setw( 12 ) << "Fahrenheit ";

//   cout << endl;

//   // display temperatures in blocks of 25
//   for ( int i = 0; i < 25; i++ )
//   {
//      for ( int j = 0; j <= 75; j += 25 )
//         cout << setw( 7 ) << i + j
//            << setw( 11 ) << fahrenheit( i + j ) << ' ';

//      cout << endl;
//   } // end for

//   // display equivalent for 100
//   cout << setw( 64 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;

//   // display table of Celsius equivalents of Fahrenheit temperatures
//   cout << "\nCelsius equivalents of Fahrenheit temperatures:" << endl;

//   // create 4 sets of table headers
//   for ( int t = 0; t < 4; t++ )
//      cout << setw( 10 ) << "Fahrenheit" << setw( 9 ) << "Celsius ";

//   cout << endl;

//   // display temperatures in blocks of 45
//   for ( int i = 32; i < 77; i++ )
//   {
//      for ( int j = 0; j <= 135; j += 45 )
//         cout << setw( 10 ) << i + j
//            << setw( 8 ) << celsius( i + j ) << ' ';

//      cout << endl;
//   } // end for

//   // display equivalent for 212
//   cout << setw( 67 ) << 212 << setw( 8 ) << celsius( 212 ) << endl;
//} // end main

//// celsius returns Celsius equivalent of fTemp,
//// given in Fahrenheit
//int celsius( int fTemp )
//{
//   return static_cast< int > ( 5.0 / 9.0 * ( fTemp - 32 ) );
//} // end function celsius

//// fahrenheit returns Fahrenheit equivalent of cTemp,
//// given in Celsius
//int fahrenheit( int cTemp )
//{
//   return static_cast< int > ( 9.0 / 5.0 * cTemp + 32 );
//} // end function fahrenheit
