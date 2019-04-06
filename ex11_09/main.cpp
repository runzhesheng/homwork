#include<iostream>
#include"package.h"
#include"twodaypackage.h"
#include"overnightpackage.h"
using namespace std;

int main()
{
    Package post_1("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10);
    cout<<"post 1:"<<endl;
    cout<<"post name: "<<post_1.get_post_name()<<endl;
    cout<<"receive name: "<<post_1.get_receive_name()<<endl;
    cout<<"post location: "<<post_1.get_post_location()<<endl;
    cout<<"receive location: "<<post_1.get_receive_location()<<endl;
    cout<<"post code: "<<post_1.get_post_code()<<endl;
    cout<<"receive code: "<<post_1.get_receive_code()<<endl;
    cout<<"weight: "<<post_1.get_weight()<<endl;
    cout<<"price of each kilo: "<<post_1.get_price()<<endl;
    cout<<"price of all: "<<post_1.calculate_cost()<<endl;
    cout<<endl;

    TwoDayPackage post_2("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10,200);
    cout<<"post 2:"<<endl;
    cout<<"post name: "<<post_2.get_post_name()<<endl;
    cout<<"receive name: "<<post_2.get_receive_name()<<endl;
    cout<<"post location: "<<post_2.get_post_location()<<endl;
    cout<<"receive location: "<<post_2.get_receive_location()<<endl;
    cout<<"post code: "<<post_2.get_post_code()<<endl;
    cout<<"receive code: "<<post_2.get_receive_code()<<endl;
    cout<<"weight: "<<post_2.get_weight()<<endl;
    cout<<"price of each kilo: "<<post_2.get_price()<<endl;

    cout<<"two day service price: "<<post_2.get_two_price()<<endl;
    cout<<"price of all: "<<post_2.calculate__cost()<<endl;
    cout<<endl;

    OvernightPackage post_3("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10,20);
    cout<<"post 3:"<<endl;
    cout<<"post name: "<<post_3.get_post_name()<<endl;
    cout<<"receive name: "<<post_3.get_receive_name()<<endl;
    cout<<"post location: "<<post_3.get_post_location()<<endl;
    cout<<"receive location: "<<post_3.get_receive_location()<<endl;
    cout<<"post code: "<<post_3.get_post_code()<<endl;
    cout<<"receive code: "<<post_3.get_receive_code()<<endl;
    cout<<"weight: "<<post_3.get_weight()<<endl;
    cout<<"price of each kilo: "<<post_3.get_price()<<endl;

    cout<<"over night price of each kilo: "<<post_3.get_overnight_price();
    cout<<"price of all: "<<post_3.calculate___cost()<<endl;
    return 0;
}
