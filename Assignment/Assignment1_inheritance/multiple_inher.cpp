#include<iostream>
using namespace std;
class student
{
    private:
    char name[25];
    int studID;
    public:
    void getdata()
    {
        cout<<"\n Enter Name: ";
        cin>>name;
        cout<<"\nEnter STudent ID:";
        cin>>studID;
    }
    void showdata()
    {
        cout<<"\n Name: "<<name<<endl;
        cout<<"\n Student ID: "<<studID;
    }
};
class employee
{
    private:
    char org_name[25];
    int empID;
    public:
    void getdata()
    {
        cout<<"Enter name of associated Oraganization: ";
        cin>>org_name;
        cout<<"\n Enter Employee ID: ";
        cin>>empID;
    }
    void showdata()
    {
        cout<<"\n Name of associated organization: "<<org_name;
        cout<<"\n Employee ID: "<<empID;
    }
};
class marketing_officer:public student,public employee
{
    private:
    int working_hour;
    public:
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout<<"Enter working hours: ";
        cin>>working_hour;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"\n Working hours: "<<working_hour;
    }
};
int main()
{
    marketing_officer moff;
    cout<<"Enter the data of marketing officer"<<endl;
    moff.getdata();
    cout<<"\n Data of marketing officer"<<endl;
    moff.showdata();
    return 0;

}
