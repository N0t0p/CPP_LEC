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
    cout<<"a.salary ="<<a.salary;
    // cout<<"a.bonus ="<<a.bonus;
    cout<<"b.salary ="<<b.salary;
    cout<<"b.bonus ="<<a.bonus;
}