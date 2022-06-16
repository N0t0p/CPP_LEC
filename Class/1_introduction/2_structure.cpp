#include<iostream>
using namespace std;
struct student{
    char name[30];
    int roll;
    char address[30];

};
int main(){
    student s;
    cout <<"ENTER NAME:"<<endl;
    cin >>s.name;
    cout <<"ENTER ROLL:"<<endl;
    cin >>s.roll;
    cout <<"ENTER ADDRESS:"<<endl;
    cin >>s.address;
    cout <<"-------INFO-------"<<endl;
    cout <<"Name :"<<s.name<<endl;
    cout <<"Roll no:"<<s.roll<<endl;
    cout <<"Address-"<<s.address<<endl;
    return 0;

}