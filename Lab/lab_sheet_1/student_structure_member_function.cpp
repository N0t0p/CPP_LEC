#include <iostream>
using namespace std;

struct student {
    char name[20];
    char address[30];
    int roll;
    
    student getInfo()
    {
    struct student s1;
    cout<<"-----Enter information of student----- "<<endl;
    cout<<"Enter the name of the student :"<<endl;
    cin>>s1.name;
    cout<<"Enter the address ;"<<endl;
    cin>>s1.address;
    cout<<"Enter the roll no :"<<endl;
    cin>>s1.roll;
    return s1;
    }
    
    void display(student s){
    cout<<"---Displaying info---"<<endl;
    cout<<"Name = "<<s.name<<endl;
    cout<<"Address = "<<s.address<<endl;
    cout<<"Roll no = "<<s.roll;

    }
};
int main()
{
    student s;
    s = s.getInfo();
    s.display(s);
}