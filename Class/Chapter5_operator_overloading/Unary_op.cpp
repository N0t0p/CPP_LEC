#include<iostream>
using namespace std;
class Unary 
{
    private :
    int a,b,c;
    public:
    Unary()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    Unary(int d,int e,int f)
    {
        a = d;
        b = e;
        c = f;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void display()
    {
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;

    }
};
int main ()
{
    Unary a(10,20,25);
    a.display();
    -a;
    a.display();

}