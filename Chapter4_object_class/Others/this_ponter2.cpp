#include <iostream>
using namespace std;
class Test 
{
    private:
    int x;
    public:
    void setX(int x)
    {
       this->x=x;
    }
    void print()
    {
        cout<<"value of x is "<<x<<endl;
        cout<<"the address of the object is calling x is "<<this<<endl;

    }
};
int main ()
{
    Test obj,obj2;
    obj.setX(20);
    obj.print();
     obj2.setX(20);
    obj2.print();
    return 0;

}