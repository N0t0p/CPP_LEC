#include<iostream>
using namespace std;
class Baseone
{
    public:
    void display()
    {
        cout<<"I am from baseone"<<endl;
    }
};
class Basetwo
{
    public:
    void display()
    {
        cout<<"I am from basetwo"<<endl;
    }
    
};
class derived:public Baseone, public Basetwo
{
    public:
    void drvdisplay()
    {
        display();       //error :ambigous,which display to call
        Baseone::display();//ok
        Basetwo::display();//ok
    }
};
int main()
{
    derived der;
    der.display();     //error:ambigous,which  to call
    der.Baseone::display();
    der.Basetwo::display();
}