#include<iostream>
using namespace std;

class class1{
    friend class class2;
    private:
    int a;
    public:
    class1(int x)
    {
        a = x;
    }
    

};
class class2{
   
    public:
    class2( class1 obj)
    {
    cout<<"the value of x is "<<obj.a;
}
};
int main()
{
    class1 obj(9);
    class2 obj2(obj);
}