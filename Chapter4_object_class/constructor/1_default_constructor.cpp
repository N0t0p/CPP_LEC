#include<iostream>
using namespace std;
class construct
{
    public:
    int a;
    int b;

    construct()
    {
        cout<<"constructor is called"<<endl;
        a = 5;
        b = 10;
    }
    void display()
    {
        cout<<"sairoj"<<endl;
    }
};
int main ()
{
 construct c1;
 c1.display();
 cout<<"the value of a is "<<c1.a<<endl;
 cout<<"the value of b is "<<c1.b<<endl;
}