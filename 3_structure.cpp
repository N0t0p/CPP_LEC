
#include<iostream>
using namespace std;
struct student{
    char name[30];
    char address[30];
    int roll;
}s[5];
int main(){
    int i;
    cout <<"ENTER INFORMATION OF STUDENT"<<endl;
   
    for(i=0;i<5;++i)
    {
         cout <<"NAME:"<<endl;
         cin >>s[i].name;
         cout <<"ROLL:"<<endl;
         cin >>s[i].roll;
         cout <<"ADDRESS"<<endl;
         cin >>s[i].address;
    }

cout <<"------INFORMATION-------"<<endl;
for(i=0;i<5;++i){
    cout<<"NAME:"<<s[i].name<<endl;
    cout<<"ROLL:"<<s[i].roll<<endl;
    cout<<"ADDRESS:"<<s[i].address<<endl;
}
return 0;
}