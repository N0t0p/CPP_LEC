#include <iostream>
using namespace std;

class Student 
{
    public:
    double marks1,marks2;
};

Student createStudent(){
    Student student;
    student.marks1 = 90;
    student.marks2 = 85;
    cout<<"Marks 1 ="<<student.marks1<<endl;
    cout<<"marks 2 ="<<student.marks2;
    return student;
}
int main()
{
 Student student;
 student = createStudent();
}