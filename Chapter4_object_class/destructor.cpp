#include<iostream>
using namespace std;
 
 class Helloworld{
    public:
    Helloworld()
    {
        cout<<"Constructor is called"<<endl;
    }
    ~Helloworld(){
        cout<<"Destructor is called"<<endl;
    }
    void Display()
    {
        cout<<"Hello world"<<endl;
    }
 };
 int main()
 {
    Helloworld obj;
    obj.Display();
    return 0;
 }