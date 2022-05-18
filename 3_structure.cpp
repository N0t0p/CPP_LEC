
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

cout <<"---------INFORMATION--------"<<endl;
cout <<"NAME \t ROLL \t ADDRESS "<<endl;
for(i=0;i<5;++i){
    cout<<s[i].name;
    cout<<"\t"<<s[i].roll;
    cout<<"\t"<<s[i].address<<endl;
}
return 0;
}