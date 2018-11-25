#include<iostream>
#include<string>
#include"gradebook.h"
using namespace std;
int main()
{
    GradeBook mygradebook("C++");

    mygradebook.displayMessage();
    mygradebook.inputGrade();
    mygradebook.displayGradeReporte();
    return 0;
}
