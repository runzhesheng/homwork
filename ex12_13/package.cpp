#include<iostream>
#include"package.h"
using namespace std;

Package::Package(const string & p_n, const string &r_n, const string &p_l,const string &r_l,
        int p_c,int r_c,int w,int p)
//      :weight(w>0? w:throw("weight must>0")),
//     price(p>0? p:throw("weight must>0"))
{
    if((w<0)||(p<0))  cout<<"weight & price must >0";
    else
    {
        set_weight(w);
        set_price(p);
    }
    calculate_cost();
    set_post_name(p_n);
    set_receive_name(r_n);
    set_post_location(p_l);
    set_receive_location(r_l);
    set_post_code(p_c);
    set_receive_code(r_c);
}



//double Package::calculate_cost(int weight,int price)
void Package::set_weight(int w)
{
//    weight(w>0? w:throw("weight must>0"));   //重量必须大于零
    weight=w;
}
int Package::get_weight() const
{
    return weight;
}

void Package::set_price(int p)
{
//    price(p>0? p:throw("weight must>0"));   //价格必须大于零
    price=p;
}
int Package::get_price() const
{
    return price;
}


double Package::calculate_cost()
{
    return get_weight()*get_price();
}


void Package::set_post_name(const std::string &p_n)
{
    post_name=p_n;
}

string Package::get_post_name() const
{
    return post_name;
}

void Package::set_receive_name(const std::string &r_n)
{
    receive_name=r_n;
}

string Package::get_receive_name() const
{

    return receive_name;
}

void Package::set_post_location(const std::string &p_l)
{
    post_location=p_l;
}

string Package::get_post_location() const
{
    return post_location;
}

void Package::set_receive_location(const std::string &r_l)
{
    receive_location=r_l;
}

string Package::get_receive_location() const
{
    return receive_location;
}

void Package::set_post_code(int p_c)
{
    post_code=p_c;
}

int Package::get_post_code() const
{
    return post_code;
}

void Package::set_receive_code(int r_c)
{
    receive_code=r_c;
}

int Package::get_receive_code() const
{
    return receive_code;
}

void Package::print() const
{
    cout<<"post 1:"<<endl;
    cout<<"post name: "<<get_post_name()<<endl;
    cout<<"receive name: "<<get_receive_name()<<endl;
    cout<<"post location: "<<get_post_location()<<endl;
    cout<<"receive location: "<<get_receive_location()<<endl;
    cout<<"post code: "<<get_post_code()<<endl;
    cout<<"receive code: "<<get_receive_code()<<endl;
    cout<<"weight: "<<get_weight()<<endl;
    cout<<"price of each kilo: "<<get_price()<<endl;
    cout<<"price of all: "<<calculate_cost()<<endl;
    cout<<endl;
}
