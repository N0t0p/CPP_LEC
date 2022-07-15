// wap to read name roll number and marks that can catch multiple exception usng exception class if roll no is -ve and marks is more than full marks 
#include<iostream>
using namespace std;
class Student 
{
    public:
    char name[30];
    int roll ;
    float marks;
    class Roll {};
    
    class Marks{};
    


    void getData()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter roll no :"<<endl;
        cin>>roll;
        if (roll < 0)
        {
            throw Roll();
        }
        cout<<"Enter marks (full marks is 100):"<<endl;
        cin>>marks;
        if (marks > 100)
        {
            throw Marks();
        }
        
    }
    void showData()
    {
      cout<<"Name is "<<name;
      cout<<"Roll is "<<roll;
      cout<<"Marks is "<<marks;
    }
};
int main()
{
    Student s1;
    Data:
    try{
    s1.getData();
    }

catch (Student::Roll)
{   
    cout<<"Error Roll no should not be negative"<<endl;
    goto Data;
}
catch (Student::Marks)
{   
    
    cout<<"Error Marks more than full marks"<<endl;
    goto Data;

}
s1.showData();
}