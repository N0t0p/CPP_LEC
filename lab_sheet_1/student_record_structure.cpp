#include <iostream>
using namespace std;

struct student {
    char name[20];
    char address[30];
    int roll;
};
int main()
{
    student s;
    cout<<"-----Enter information of student----- "<<endl;
    cout<<"Enter the name of the student :"<<endl;
    cin>>s.name;
    cout<<"Enter the address ;"<<endl;
    cin>>s.address;
    cout<<"Enter the roll no :"<<endl;
    cin>>s.roll;
    
    cout<<"---Displaying info---"<<endl;
    cout<<"Name = "<<s.name<<endl;
    cout<<"Address = "<<s.address<<endl;
    cout<<"Roll no = "<<s.roll;

    
}