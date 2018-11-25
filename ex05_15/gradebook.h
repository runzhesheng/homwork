
#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string);
    void setCourseName(string);
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrade();
    void displayGradeReporte() const;

private:
    string courseName;
     double ACount;
     double BCount;
     double CCount;
     double DCount;
     double FCount;
     double counter_A;
     double counter_B;
     double counter_C;
     double counter_D;
     double counter_F;
}
;
