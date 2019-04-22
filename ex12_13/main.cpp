#include<iostream>
#include"package.h"
#include"twodaypackage.h"
#include"overnightpackage.h"
#include<vector>
using namespace std;


void virtual_pointer(const Package*const);

int main()
{
//    Package post_1("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10);

    TwoDayPackage post_2("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10,200);

    OvernightPackage post_3("li yurun","jing shangming","chongqing","qingdao",401343,133212,12,10,20);


    vector<Package*>package(2);
    package[0]=&post_2;
    package[1]=&post_3;


    for(const Package *packagePtr:package)
        virtual_pointer(packagePtr);

    return 0;
}

void virtual_pointer(const Package* const package_ptr)
{
    package_ptr->print();
}
