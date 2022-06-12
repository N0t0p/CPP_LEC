#include<iostream>
using namespace std;
class Account 
{
    public :
    int salary = 10000;

};
class Programmer : public Account
{
    public : 
    int bonus = 1000;
};
int main ()
{
    Programmer a;
    Account b;
    cout<<"a.salary ="<<a.salary<<endl;
    // cout<<"a.bonus ="<<a.bonus; Generates error base cant access child class
    cout<<"b.salary ="<<b.salary<<endl;
    cout<<"b.bonus ="<<a.bonus<<endl;
}