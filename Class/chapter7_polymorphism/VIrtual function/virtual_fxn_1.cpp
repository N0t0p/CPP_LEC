#include<iostream>
using namespace std;
class Animal 
{   
    public :
    virtual void move () = 0 ;
    void show()
    {
        cout<<"run";
    }
    
};
class Dog : public Animal 
{   
    public:
    void move (){
        cout <<"Dog runs ";
    }
};
class Cat : public Animal 
{   
    public:
    void move (){
        cout <<"Cat runs ";
    }
};
int main ()
{
    Animal *an;
    Dog obj;
    Cat obj2;
    an = &obj;
    an->move();
    an = &obj2;
    an->move();
    an->show();
}