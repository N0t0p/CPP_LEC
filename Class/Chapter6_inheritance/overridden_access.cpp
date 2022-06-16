#include<iostream>
using namespace std;
class Base 
{
    public :
    void print()
    {
        cout<<"base function";
        // Base::print();
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
    Derived derive1,derive2;
    derive1.Base::print();
    derive2.print();



}