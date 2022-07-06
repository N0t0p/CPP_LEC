#include <iostream>
using namespace std;
class base 
{
    protected :
    int num ;
    public :
    void readdata()
    {
        cout<<"Enter the number in base : ";
        cin>>num;
    }
    void showdata()
    {
        cout<<"The number in base is "<<num<<endl;
    }
};
class derived : public base
{
    private :
    int num ;
    public :
    void readdata()
    {
        cout<<"Enter the number in derived : ";
        cin>>num;
    }
    void showdata()
    {
        cout<<"The number in derived is "<<num<<endl;
    }
};
int main ()
{
    derived d1;
    d1.readdata();
    d1.showdata();
    system("pause");
    return 0;
}