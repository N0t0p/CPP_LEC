#include<iostream>
#include <iomanip> 
using namespace std;
class Student
{
   private:
    char name[30];
    int roll;
    char address[20];
    float percentage;
    public:
    void input()
    {
        cout<<"Enter the name of the student :"<<endl;
        cin>>name;
        cout<<"Enter the roll of the student :"<<endl;
        cin>>roll;
        cout<<"Enter the address of the student :"<<endl;
        cin>>address;
        cout<<"Enter the percentage :"<<endl;
        cin>>percentage;
    }
    void display()
    {
        if (percentage>45)
        {   
            cout<<name<<setw(20)<<roll<<setw(20)<<address<<setw(35)<<percentage<<endl;
        }
    }

};
int main(){
    int n,i;
 Student s[n];
cout<<"Enter the no of student"<<endl;
cin>>n;

for( i=0;i<n;i++){
   s[i].input();
}
cout<<setw(60)<<"----------Passed students----------"<<endl;
cout<<"Name"<<setw(22)<<"Roll"<<setw(25)<<"Address"<<setw(35)<<"Percentage"<<endl;

for( i=0;i<n;i++){
 s[i].display();
}
}
