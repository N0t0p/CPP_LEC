#include<iostream>
using namespace std;
class base
{   
    public :
base()
    {
        cout<<"It is base constructor"<<endl;
    }
    void  display()
    {
        cout<<"It is display in base"<<endl;
    }

     virtual ~base()
    {
        cout<<"It is base destructor"<<endl;
    }
    
};
class derived : public base
{   
    public:
     derived()
    {
        cout<<"It is derived constructor"<<endl;
    }
    void display()
    {
        cout<<"It is display in derived"<<endl;
    }

    ~derived()
    {
        cout<<"It is derived destructor"<<endl;
    }
    
};
int main()
{
    base *b;
    b = new derived;
    b->display();
    delete b;
}