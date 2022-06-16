#include<iostream>
using namespace std;
class Base 
{
    public :
     Base()
    {
        cout<<"This is constructor of base"<<endl;
    }
    ~Base()
    {
        cout<<"This is destructor of base"<<endl;
    }
};
class Derived : public Base 
{
    public :
     Derived()
    {
        cout<<"This is constructor of derived"<<endl;
    }
    ~Derived()
    {
        cout<<"This is destructor of derived"<<endl;
    }
};
int main ()
{
    Derived a;
}