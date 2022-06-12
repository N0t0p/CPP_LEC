#include<iostream>
using namespace std;
class Base 
{
    public :
    void print()
    {
        cout<<"base function";
    }
};
class Derived : public Base 
{
    public :
    void print()
    {
        cout<<"Derived  function";
    }
};
int main ()
{
    Derived a;
    a.print();

}
