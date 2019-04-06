#ifndef PACKAGE_H
#define PACKAGE_H

#include<iostream>

 class Package
 {
 public:
     Package(const std::string & p_n, const std::string &r_n, const std::string &p_l,const std::string &r_l,
             int p_c,int r_c,int w,int p);

     double calculate_cost();

     void set_post_name(const std::string &p_n);
     std::string get_post_name() const;

     void set_receive_name(const std::string &r_n);
     std::string get_receive_name() const;

     void set_post_location(const std::string &p_l);
     std::string get_post_location() const;

     void set_receive_location(const std::string &r_l);
     std::string get_receive_location() const;

     void set_post_code(int p_c);
     int get_post_code() const;

     void set_receive_code(int r_c);
     int get_receive_code() const;

     void set_weight(int w);
     int get_weight() const;

     void set_price(int p);
     int  get_price() const;


 private:
     std::string post_name;           //寄件人姓名
     std::string receive_name;        //收件人姓名
     std::string post_location;       //寄件人地址
     std::string receive_location;    //收件人地址
     int post_code;                   //寄件邮政编码
     int receive_code;                //收件邮政编码
     int weight;                      //重量 盎司
     int price;                       //每盎司价格



 };
#endif // PACKAGE_H
