#include<iostream>
#include"gradebook.h"
using namespace std;

GradeBook::GradeBook(string name)
    : ACount(0),
      BCount(0),
      CCount(0),
      DCount(0),
      FCount(0),
      counter_A(0),
      counter_B(0),
      counter_C(0),
      counter_D(0),
      counter_F(0)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if(name.size()<=25)
        courseName=name;
    else
    {
        courseName=name.substr(0,25);
        cerr<<"Name("<<name<<")exceeds maxium lengh(25)."<<endl;
    }
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout<<"Welcome to the grade book for:\n"<<getCourseName()<<endl;
}

void GradeBook::inputGrade()
{
    string grade;

    cout<<"Enter the letter grade."<<endl;
    cout<<"Enter the EOF character to endl input."<<endl;
    cin>>grade;
    while( grade!="EOF")
     {

      if(grade=="A"||grade=="a")
      {
           ++ACount;
           counter_A=counter_A+4;
      }


      if(grade=="B"||grade=="c")
      {
          ++BCount;
          counter_B=counter_B+3;
      }

      if(grade=="C"||grade=="c")
      {
          ++CCount;
          counter_C=counter_C+2;

      }

      if(grade=="D"||grade=="d")
     {
          ++DCount;
          counter_D=counter_D+1;
     }

     if(grade=="F"||grade=="f")
     {
          ++FCount;
     }

    cout<<"Enter the letter grade."<<endl;
    cout<<"Enter the EOF character to endl input."<<endl;
    cin>>grade;

    }//end while
}

void GradeBook::displayGradeReporte() const
{
    cout<<"\n\nNumbers of student who received each letter grade:"<<endl;
    cout<<"A:"<<ACount<<endl;
    cout<<"B:"<<BCount<<endl;
    cout<<"C:"<<CCount<<endl;
    cout<<"D:"<<DCount<<endl;
    cout<<"F:"<<FCount<<endl;
    cout<<"\n\nAverage of student who received each letter grade:"<<endl;
    cout<<(counter_A+counter_B+counter_C+counter_D+counter_F)/(ACount+BCount+CCount+DCount+FCount)<<endl;

}
